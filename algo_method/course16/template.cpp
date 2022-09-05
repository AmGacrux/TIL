#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0);
  for(int& ai : a) cin >> ai;

  int max = -1;
  for(int i = 0; i < n; ++i) {
    for(int j = i; j < n; ++j) {
      int d = abs(a[i]-a[j]);
      if(d >= max) {
        max = d;
      }
    }
  }
  cout << max << endl;

  return 0;
}
