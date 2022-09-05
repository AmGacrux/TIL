#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  long long cnt = 0;
  for(int x = 1; x <= n; ++x) {
    for(int y = 1; y <= n; ++y) {
      int z = min(n, (m-x-y));
      if(z > 0) {
        cnt += z;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}
