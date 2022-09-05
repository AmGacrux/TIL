#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0);
  long long s = 0LL, a2 = 0LL;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    s += a[i];
    a2 += (a[i]*a[i]);
  }

  cout << (s*s-a2)/2 << endl;

  return 0;
}
