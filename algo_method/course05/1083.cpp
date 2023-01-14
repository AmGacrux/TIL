#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;
    vector<int> a(n);
    for(auto& ai : a) {
        cin >> ai;
    }

    bool ans = false;
    for(int s = 0; s < (1<<n); ++s) {
        int sum = 0;
        for(int i = 0; i < n; ++i) {
            if(s & (1<<i)) {
                sum += a[i];
            }
        }
        if(sum == v) {
            ans = true;
        }
    }

    cout << (ans?"Yes":"No") << endl;

    return 0;
}
