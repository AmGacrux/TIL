#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, q;
  cin >> n >> s >> q;

  for(int i = 0, qry[2], bit; i < q; ++i) {
    cin >> qry[0] >> qry[1];
    bit = (1 << qry[1]);
    switch(qry[0]) {
      case 0:
        s ^= bit;
        break;
      case 1:
        cout << ((s & bit)?"on":"off") << endl;
        break;
    }
  }

  return 0;
}
