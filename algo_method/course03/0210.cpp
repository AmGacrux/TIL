#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, v;
  cin >> n >> v;
  vector<int> a(n);
  int ans = 0;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] == v) {
      ans++;
    } 
  }
  cout << ans << endl;

  return 0;
}
