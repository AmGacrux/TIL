#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n+1,0);
  for(int i = 1; i <= n; ++i) { 
    cin >> a[i];
    a[i] += a[i-1];
  }

  int q;
  cin >> q;
  for(int i = 0, k; i < q; ++i) {
    cin >> k;
    cout << a[k] << endl;
  }

  return 0;
}
