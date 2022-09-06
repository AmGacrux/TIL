#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for(auto& si: s) cin >> si;

  for(int i = 0; i < n; ++i) {
    for(int j = i+1; j < n; ++j) {
      if(s[i] == s[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
