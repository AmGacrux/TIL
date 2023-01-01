#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> a;
    for(int i = 0, ai; i < n; ++i) {
        cin >> ai;
        a[ai] += 1;
    }

    set<pair<int,int>> s;
    for(auto& ai : a) {
        s.insert({ai.second, ai.first});
    }

    auto m = *s.rbegin();
    cout << m.second << " " << m.first << endl;
}
