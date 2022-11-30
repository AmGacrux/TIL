#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long ans = 0LL;
    for(int i = 0; i < n; i++) {
        ans += min(n, k/(i+1));
    }
    cout << ans << endl;

    return 0;
}
