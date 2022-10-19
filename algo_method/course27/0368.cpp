#include <bits/stdc++.h>
using namespace std;

int main() {
    auto f = [&](double x){
        return x*x*x + x*x + 2.0f*x + 3.0f;
    };
    double n;
    cin >> n;

    double p = 0.0f, q = 100.0f;
    while((q-p) > 1e-4) {
        double m = (p+q) / 2.0f;
        if(f(m) < n) p = m;
        else if(f(m) > n) q = m;
    }

    cout << (p+q)/2.0f << endl;

    return 0;
}