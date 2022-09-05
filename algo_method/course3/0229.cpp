#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int n = s.length(), m = t.length();
  bool ans = false;
  for(int i = 0; i <= (n-m); ++i) {
    if(s.substr(i,m) == t) {
      ans = true;
      break;
    } 
  }
  cout << (ans?"Yes":"No") << endl;

  return 0;
}
