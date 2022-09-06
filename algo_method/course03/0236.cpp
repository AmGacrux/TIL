#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> a(26,0);

  int n = s.length();
  for(int i = 0; i < n; ++i) {
    a[s[i]-'a']++;
  }
  int cnt = 0;
  for(int i = 0; i < 26; ++i) {
    cnt += ((a[i]>0)?1:0);
  }
  cout << cnt << endl;

  return 0;
}
