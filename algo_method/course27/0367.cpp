#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    auto f = [&](double x) {
        return x*(x*(x*(x*(x*(n+1)+1)+1)+1)+1)+1;
    };

    double p = 0, q = 100, mid = q;
    while(abs(m-f(mid)) > 1e-4) {
        mid = (p + q) / 2;
        if(f(mid) < m) p = mid;
        else if(f(mid) > m) q = mid;
    }
    cout << mid << endl;

    return 0;
}