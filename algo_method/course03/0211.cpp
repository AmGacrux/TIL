#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int idx = -1, max = -1;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] > max) {
      idx = i;
      max = a[i];
    }
  }
  cout << idx << endl;

  return 0;
}
