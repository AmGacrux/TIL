#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  bool isPrime = true;
  if(n == 1) isPrime = !isPrime;
  for(int i = 2; i < n; ++i) {
    if(n%i==0) {
      isPrime = !isPrime;
      break;
    }
  }
  cout << (isPrime?"Yes":"No") << endl;

  return 0;
}
