#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    using vp = vector<pair<int,int>>;
    vp v(n);
    for(auto& p : v) {
        cin >> p.first >> p.second;
    }

    sort(v.begin(), 
         v.end(), 
         [](const pair<int,int> &lhs, pair<int,int> &rhs){
            return lhs.second <= rhs.second;
         });

    for(auto& p : v) {
        cout << p.first << " " << p.second << endl;
    }
}
