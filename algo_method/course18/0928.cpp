#include <bits/stdc++.h>
using namespace std;

void quicksort(vector<pair<int,int>>& v, auto comp) {
    if(!v.size()) return;

    int n = v.size(), pivot = static_cast<int>(n/2);

    vector<pair<int,int>> l,r;
    for(int i = 0; i < n; ++i) {
        int result = comp(v[i], v[pivot]);
        if(i == pivot) continue;
        else if(result == 1) l.push_back(v[i]);
        else if(result == 0) {
            if(i % 2 == 0) {
                l.push_back(v[i]);
            }
            else {
                r.push_back(v[i]);
            }
        }
        else r.push_back(v[i]);
    }

    quicksort(l, comp);
    quicksort(r, comp);

    l.push_back(v[pivot]);
    l.insert(l.end(), r.begin(), r.end());
    v = l;
}

int main() {
    long long n;
    cin >> n;
    vector<pair<int,int>> a(n,{0,0}); 
    for(auto&& x : a) cin >> x.first >> x.second;

    quicksort(a, [&](pair<int,int>& lhs, pair<int,int>& rhs){
            if(lhs.first < rhs.first) return 1;
            else if(lhs.first == rhs.first) return 0;
            else return -1;
            });

    bool isEnabled = true;
    for(int i = 1, x = a[0].second; i < n; ++i) {
        if(x > a[i].first) {
            isEnabled = false;
            break;
        }
        x = a[i].second;
    }
    cout << (isEnabled?"Yes":"No") << endl;

    return 0;
}
