#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, x, ans = 0;
  cin >> n >> x;
  vector<long long > a(n, 0);

  for(long long i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for(long long i = 0; i < n; ++i) {
      if((1<<i) & x) {
          ans += a[i];
      }
  }

  cout << ans << endl;

  return 0;
}
