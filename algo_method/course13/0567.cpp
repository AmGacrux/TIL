#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  int sum = 0;
  for(int i = l; i <= r; ++i) {
    int ai = (2*i-1);
    sum += (ai*ai);
  }
  cout << sum << endl;

  return 0;
}
