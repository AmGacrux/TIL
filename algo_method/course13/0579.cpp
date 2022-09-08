#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; ++i) cin >> a[i];

  int product = 1;
  for(int i = 0; i < n; ++i) {
      product = (product*a[i])%10;
  }

  cout << product << endl;

  return 0;
}
