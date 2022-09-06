#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(int i = 0; i < s.length()/2; ++i) {
    if(s[i] != s[s.length()-1-i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
