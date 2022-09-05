#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s = "1";
  while(n > 0) {
    s += "0";
    n--;
  }
  cout << s << endl;

  return 0;
}
