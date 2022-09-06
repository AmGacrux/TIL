#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  char c;
  cin >> s >> c;
  for(int i = 0; i < s.length(); ++i) {
    if(s[i] == c) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
