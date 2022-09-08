#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  // note: C++20
  // uint32_t xx = static_cast<uint32_t>(x);
  // cout << std::popcount(xx) << endl;

  int sum = 0;
  while(x > 0) {
    if(x & 1) sum++;
    x >>= 1;
  }
  cout << sum << endl;

  return 0;
}
