#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  cin >> n;

  int q, x, v;
  for(int _ = 0; _ < n; ++_) {
    cin >> q;
    if(q == 0) {
      cin >> x;
      cout << a[x] << endl;
    }
    else {
      cin >> x >> v;
      a[x] = v;
    }
  }

  return 0;
}
