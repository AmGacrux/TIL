#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for(vector<int>::reverse_iterator it = a.rbegin(); it != a.rend(); ++it) {
    cout << *it << endl;
  }

  return 0;
}
