#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << (((a%10)>(b%10))?a:b) << endl;

  return 0;
}
