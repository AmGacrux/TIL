#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int ans = 0;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for(int i = 1; i < n; ++i) {
    if(a[i] > a[i-1]) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
