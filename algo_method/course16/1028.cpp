#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> s(n+1,0);
  for(int i = 1; i <= n; ++i) {
    cin >> s[i];
    s[i] += s[i-1];
  }

  cout << ([&]() {
    for(int i = 0, a, b, max = numeric_limits<int>::min(); i < (n-d)+1; ++i) {
      int tmp = s[(i+d)]-s[i];
      if(tmp >= max) {
        a = i;
        b = (i+d-1);
        max = tmp;
      }
      if(i == (n-d)) {
        return to_string(a) + "~" + to_string(b);
      }
    }
  }()) << endl;

  return 0;
}
