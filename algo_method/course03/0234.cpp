#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  // input
  for(int i = 0; i < n; ++i) cin >> a[i];

  // count
  int cnt = 0;
  for(int i = 0; i < n; ++i) {
    // prime check
    bool isPrime = true;
    if(a[i] != 1) { 
      for(int j = 2; j < a[i]; ++j) {
        if(a[i]%j == 0) {
          isPrime = false;
          break;
        }
      }
      cnt += ((isPrime)?1:0);
    }
  }
  cout << cnt << endl;

  return 0;
}
