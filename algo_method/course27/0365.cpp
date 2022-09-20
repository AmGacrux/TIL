#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 各点の座標,使用済みフラグを用意
    vector<pair<pair<int, int>,bool>> v(n);
    for (auto &vi : v) {
        cin >> vi.first.first >> vi.first.second;
        vi.second = false;
    }

    // 2点間の距離を算出
    vector<vector<double>> d(n, vector<double>(n, numeric_limits<double>::max()));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                continue;
            }
            d[i][j] = sqrtf(pow((v[i].first.first - v[j].first.first), 2)
                    + pow((v[i].first.second - v[j].first.second), 2));
        }
    }

    // 探索
    vector<double> p;
    v[0].second = true;
    for (int curr = 0, next = -1; p.size() < n; curr = next) {
        // 候補となる点が残り1つならば自動的に開始点に決まる
        if(p.size() == n-1) {
            p.push_back(d[curr][0]);
            break;
        } 
        // これまでに使用していない点のうち、現在地から最小の距離で行ける点を得る
        // 距離行列(i,i)=infとしたので自分自身を選択することは無い
        double min_distance = numeric_limits<double>::max();
        for (int i = 0; i < n; ++i) {
            if (!v[i].second) {
                if (d[curr][i] < min_distance) {
                    min_distance = d[curr][i];
                    next = i;
                }
            }
        }
        p.push_back(d[curr][next]);
        v[curr].second = true;
    }

    cout << accumulate(p.begin(), p.end(), 0.0f) << endl;

    return 0;
}
