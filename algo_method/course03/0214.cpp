#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int min = numeric_limits<int>::max();
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] < min) {
      min = a[i];
    }
  }
  cout << min << endl;

  return 0;
}
