#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r, cnt = 0;
  cin >> l >> r;

  for(int i = l; i <= r; ++i) {
    string is = to_string(i);
    int n = is.length();
    bool isPalindrome = true;
    for(int j = 0; j < n/2; ++j) {
      if(is[j] != is[n-1-j]) {
        isPalindrome = false;
      }
    }
    cnt += (isPalindrome?1:0);
  }

  cout << cnt << endl;

  return 0;
}
