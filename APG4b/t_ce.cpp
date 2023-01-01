#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> AB(M,vector<int>(2));
    for (auto& ABi : AB) {
        cin >> ABi.at(0) >> ABi.at(1);
    }

    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> results(N, vector(N, '-'));
    for(auto& ABi: AB) {
        results[ABi[0]-1][ABi[1]-1] = 'o';
        results[ABi[1]-1][ABi[0]-1] = 'x';
    }

    for(const auto& result : results) {
        for(int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if(i < result.size()-1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}
