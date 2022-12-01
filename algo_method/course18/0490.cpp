#include <bits/stdc++.h>
using namespace std;

void quicksort(vector<int> &v) {
    if(!v.size()) return;

    int n = v.size(), pivot = static_cast<int>(n/2);

    vector<int> l,r;
    for(int i = 0; i < n; ++i) {
        if(i == pivot) continue;
        else if(v[i] < v[pivot]) l.push_back(v[i]);
        else if(v[i] == v[pivot]) {
            if(i % 2 == 0) {
                l.push_back(v[i]);
            }
            else {
                r.push_back(v[i]);
            }
        }
        else r.push_back(v[i]);
    }

    quicksort(l);
    quicksort(r);

    l.push_back(v[pivot]);
    l.insert(l.end(), r.begin(), r.end());
    v = l;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n,0);
    for(auto& ai : a) cin >> ai;

    quicksort(a);

    long long m = numeric_limits<long long>::max();
    for(int i = 0; i <= n-k; ++i) {
        long long diff = a[i+k-1]-a[i];
        m = min(m, diff);
    }

    cout << m << endl;

    return 0;
}
