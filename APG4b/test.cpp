#include <bits/stdc++.h>
using namespace std;

int main() {
    // 再帰ラムダ関数の定義
    function<int(int)> sum = [&](int n) {
        if (n == 0) {
            return 0;
        }
        int s = sum(n - 1);
        return s + n;
    };
    cout << sum(3) << endl;

    function<string(int)> nstr = [&](int n) {
        if(n == 0) {
            return (string)"[EOM]";
        }
        return "hoge" + nstr(n-1);
    };
    cout << nstr(4) << endl;

    vector<int> v = {2, 1, 3, 0};
    sort(v.begin(), v.end());
    sort(v.begin(), v.end());
    sort(v.begin(), v.end());
    sort(v.begin(), v.end());
    do {
        for(auto &vi : v) cout << vi << " ";
        cout << endl;
    } while(next_permutation(v.begin(),v.end()));

}
