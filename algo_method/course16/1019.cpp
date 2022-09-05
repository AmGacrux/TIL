#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0);
  long long sum = 0;
  for(int& ai : a) {
    cin >> ai;
    sum += ai;
  }
  cout << sum*sum << endl;

  return 0;
}
