#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0);
  int min = numeric_limits<int>::max(), max = numeric_limits<int>::min();
  for(int& ai : a) {
    cin >> ai;
    if(ai <= min) {
      min = ai;
    }
    else if(ai >= max) {
      max = ai;
    }
  }

  cout << abs(max-min) << endl;

  return 0;
}
