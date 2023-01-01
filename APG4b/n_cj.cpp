#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N,0);

    for(auto& vi : v) {
        cin >> vi;
    }

    int ave = accumulate(v.begin(), v.end(),0)/N;

    for(const auto& vi : v) 
        cout << abs(vi-ave) << endl;
}
