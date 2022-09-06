#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;

  for(int i = 0, fi; i < n; ++i) {
    cin >> fi;
    ans |= (1 << fi);
  }
  cout << ans << endl;

  return 0;
}
