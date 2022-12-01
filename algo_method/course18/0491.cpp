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
    long long n, k;
    cin >> n >> k;
    vector<pair<int,int>> ab(n,{0,0}); 
    for(auto& x : ab) cin >> x.first >> x.second;

    quicksort(ab, [&](pair<int,int>& lhs, pair<int,int>& rhs){
            if(lhs.first < rhs.first) return 1;
            else if(lhs.first == rhs.first) return 0;
            else return -1;
            });

    long long ans = 0LL;
    for(int i = 0; i < ab.size(); ++i) {
        auto& x = ab[i];
        // Memo: 支払処理は後でminを使うよう書き直す
        if(k >= x.second) {
            k -= x.second;
            ans += ((long long)x.first * x.second);
            x.second = 0;
        }
        else {
            while(k > 0LL) {
                k--;
                x.second--;
                ans += x.first;
                if(x.second < 0) break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
