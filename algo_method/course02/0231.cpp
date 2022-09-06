#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n,0), b(m,0);

  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for(int j = 0; j < m; ++j) {
    cin >> b[j];
  }

  int cnt = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      if(a[i] > b[j]) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}
