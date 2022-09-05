#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0);
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int T = accumulate(a.begin(), a.end(), 0); // sum of ai
  cout << T << endl;

  int V = accumulate(a.begin(), a.end(), -T); // 0
  cout << V << endl;

  return 0;
}
