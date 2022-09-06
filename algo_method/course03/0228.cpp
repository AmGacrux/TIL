#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  int n = s.length();
  if(n > 1) {
    for(int i = 0; i < n; ++i) {
      if(s[i] == s[i+1]) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
