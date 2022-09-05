#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  char p, q;
  cin >> x >> p >> q;

  int a = ((p=='o') ? x[0] : ((p=='g') ? x[1] : x[2])) - '0';
  int b = ((q=='r') ? 0b100 : (q=='w') ? 0b010 : 0b001);

  bool result = (b==(a&b));
  cout << (result?"Yes":"No") << endl;

  return 0;
}
