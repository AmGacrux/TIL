#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; int n, m;
  cin >> s >> n >> m;

  s[n-1] ^= s[m-1];
  s[m-1] ^= s[n-1];
  s[n-1] ^= s[m-1];

  cout << s << endl;

  return 0;
}
