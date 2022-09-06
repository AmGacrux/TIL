#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(9, 0);
  for(int i = 0, tmp; i < n; ++i) {
    cin >> tmp;
    a[tmp-1]++;
  }

  for(const auto& ai : a) {
    cout << ai << endl;
  }

  return 0;
}
