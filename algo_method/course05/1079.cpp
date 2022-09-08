#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, q;
  cin >> n >> x >> q;

  for(int i = 0, a[2]; i < q; ++i) {
    cin >> a[0] >> a[1]; 

    switch(a[0]) {
      case 0:
        x |= (1<<a[1]);
        break;
      case 1:
        x &= ~(1<<a[1]);
        break;
      case 2:
        cout << ((x&(1<<a[1]))?"Yes":"No") << endl;
        break;
    }
  }

  return 0;
}
