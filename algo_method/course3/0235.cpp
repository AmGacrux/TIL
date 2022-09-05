#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, cnt = 0;
  cin >> n >> k;

  for(int i = 0; i <= n; ++i) {
    int factors = 0;
    for(int j = 1; j <= i; ++j) {
      if(i%j==0) {
        factors++;
      }
    }
    if(factors == k) {
        cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}
