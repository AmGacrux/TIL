#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d(n-1,0);
  for(int i = 1; i < n; ++i) { 
    cin >> d[i];
    d[i] += d[i-1];
  }

  int q;
  cin >> q;
  for(int i = 0, l, r; i < q; ++i) {
    cin >> l >> r;
    cout << (d[r]-d[l]) << endl;
  }

  return 0;
}
