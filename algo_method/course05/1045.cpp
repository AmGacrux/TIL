#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, y;
  cin >> n >> s >> y;


  for(int i = 0, q, x; i < y; ++i) {
    cin >> q >> x;
    if(q == 0) {
        s |= (1<<x);
      }
    else {
        cout << ((s&(1<<x))?"on":"off") << endl;
    }
  }

  return 0;
}
