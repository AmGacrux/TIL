#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, v;
  cin >> n >> v;
  vector<int> a(n);
  int ans = -1;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] == v) {
      ans = i;
    }
  }
  cout << ans << endl;

  return 0;
}
