#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);

  int cnt = 0;
  for(int i = 0; i < n; ++i) {
    cin >> s[i];
    bool isPalindrome = true;
    int m = s[i].length();
    for(int j = 0; j < m/2; ++j) {
      if(s[i][j] != s[i][m-1-j]) {
        isPalindrome = false;
        break;
      }
    }
    cnt += ((isPalindrome)?1:0);
  }

  cout << cnt << endl;

  return 0;
}
