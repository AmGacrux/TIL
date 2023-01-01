#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
    cout << "[ ";
    for(auto &vi : vec) {
        cout << vi << " ";
    }
    cout << "]" << endl;
}

// 文字列が数値に変換できるか判定
bool isNumber(const string& str) {
    for (const char &c : str) {
        if (!std::isdigit(c)) return false;
    }
    return true;
}

// 変数名と値の対応を格納するmap
map<string, int> vals;
// 変数名とvecの対応を格納するmap
map<string, vector<int>> vecvals;

// 計算式の入ったvectorを受け取り計算結果を返す
string calc_int(vector<string> v, int offset) {
    // 途中計算用
    deque<string> tmp_ops;

    for(size_t i = offset; i < v.size(); ++i) {
        if(v[i] == ";") {
            break;
        }
        else if(isNumber(v[i]) || v[i] == "+" || v[i] == "-") {
            // 数値もしくは演算子はそのまま受け取る
            tmp_ops.push_back(v[i]);
        }
        else {
            // 既に宣言された変数なら値を読み取る
            tmp_ops.push_back(to_string(vals[v[i]]));
        }

        // 3要素目(式の第2項目の数値)が入った時点で計算を行う
        if(tmp_ops.size() >= 3) {
            int lhs = stoi(tmp_ops.front()); tmp_ops.pop_front();
            string op = tmp_ops.front();     tmp_ops.pop_front();
            int rhs = stoi(tmp_ops.front()); tmp_ops.pop_front();

            if(op == "+") {
                tmp_ops.push_front(to_string(lhs+rhs));
            }
            else if(op == "-") {
                tmp_ops.push_front(to_string(lhs-rhs));
            }
        }
    }
    return tmp_ops.front();
}

// 計算式の入ったvectorを受け取り計算結果を返す(vec版)
vector<int> calc_vec(vector<string> v, int offset) {
    // 途中計算用
    vector<vector<int>> tmp_vecs;
    // 演算子
    deque<string> tmp_op;

    for(size_t i = offset; i < v.size(); ++i) {
        if(isNumber(v[i])) {
            tmp_vecs.back().push_back(stoi(v[i]));
        }
        else if(v[i] == ";") {
            break;
        }
        else if(v[i] == "+" || v[i] == "-") {
            tmp_op.push_back(v[i]);
        }
        else if(v[i] == "[") {
            // [が来たら新しいvecの始まりと判別する
            tmp_vecs.push_back(vector<int>{});
        }
        else {
            // 注意：
            // intとvecで同じ名前がある場合正しく動作しない(制約上はそのような入力は存在しない)

            // 既に宣言された変数なら値を読み取り現在のvecへ追加
            if(vals.count(v[i]) == true) {
                tmp_vecs.back().push_back(vals[v[i]]);
            }
            // 既に宣言されているvecなら展開して読み取る
            else if(vecvals.count(v[i]) == true) {
                tmp_vecs.push_back(vector<int>{});
                vector<int> w = vecvals[v[i]];
                for(auto wi : w) {
                    (tmp_vecs.back()).push_back(wi);
                }
            }
        }

        // 3要素目(式の第2項目の数値)がありvecの長さが等しくなった時点で計算を行う
        if(tmp_op.size() == 1 
                && tmp_vecs.size() >= 2 
                && (tmp_vecs[0].size() == tmp_vecs[1].size())) {
            vector<int> rhs = tmp_vecs.back(); tmp_vecs.pop_back();
            vector<int> lhs = tmp_vecs.back(); tmp_vecs.pop_back();
            string op = tmp_op.back();         tmp_op.pop_back();

            vector<int> p(lhs.size());
            for(size_t i = 0; i < p.size(); ++i) {
                if(op == "+") {
                    p[i] = lhs[i] + rhs[i];
                }
                else if(op == "-") {
                    p[i] = lhs[i] - rhs[i];
                }
            }
            tmp_vecs.push_back(p);
        }
    }
    return tmp_vecs.front();
}

int main() {
    int n;
    cin >> n;
    vector<vector<string>> lines(n);

    // 命令を1行ごとに半角スペース区切りで末尾(;)まで全て格納する
    for(auto& line : lines) {
        string s;
        while(cin >> s) {
            line.push_back(s);
            if(cin.get() == '\n') break;
        }
    }

    for(const auto& line : lines) {
        if(line[0] == "int") {
            vals[line[1]] = stoi(calc_int(line, 3));
        }
        else if(line[0] == "vec") {
            vecvals[line[1]] = calc_vec(line, 3);
        }
        else if(line[0] == "print_int") {
            // 演算用の仮変数
            vals["_"] = stoi(calc_int(line, 1));
            cout << vals["_"] << endl;
        }
        else if(line[0] == "print_vec") {
            // 演算用の仮変数
            vecvals["_"] = calc_vec(line, 1);
            print_vec(vecvals["_"]);
        }
    }
}
