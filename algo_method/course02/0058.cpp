#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ans = "";
  for(int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    ans += s[0];
  }
  cout << ans << endl;

  return 0;
}
