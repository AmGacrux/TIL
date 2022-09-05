#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 8;
  vector<int> x(n, 0);

  for(auto& xi : x) {
    cin >> xi;
  }

  vector<string> m(n);
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      int a = x[i] & (1 << (15-2*j));
      int b = x[i] & (1 << (14-2*j));

      char c;
      if(!a && !b) c = '.';
      else if(!a && b) c = 'o';
      else if(a && !b) c = 'x';
      m[i] += c;
    }
  }

  for(auto mi : m) {
    cout << mi << endl;
  }

  return 0;
}
