#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  vector<int> a(x,0), b(y,0), c(z,0);

  for(int i = 0; i < x; ++i) {
    cin >> a[i];
  }
  for(int j = 0; j < y; ++j) {
    cin >> b[j];
  }
  for(int k = 0; k < z; ++k) {
    cin >> c[k];
  }

  int cnt = 0;
  for(int i = 0; i < x; ++i) {
    for(int j = 0; j < y; ++j) {
      for(int k = 0; k < z; ++k) {
        if((a[i] + b[j]) == c[k]) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;

  return 0;
}
