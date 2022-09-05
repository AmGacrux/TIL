#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  // input
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  vector<int> cnt(9, 0);
  // count
  for(int i = 0; i < n; ++i) {
    cnt[a[i]-1]++;
  }

  int ans = 0;
  for(int i = 0, max = 0; i < 9; ++i) {
    if(cnt[i] >= max) {
      max = cnt[i];
      ans = i + 1;
    }
  }
  cout << ans << endl;

  return 0;
}
