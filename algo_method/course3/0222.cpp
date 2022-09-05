#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;
  if(n == 1) goto NO;
  for(int i = 2; i < n; ++i) {
    if((n%i)==0) {
        goto NO;
    }
  }
  cout << "Yes" << endl;
  return 0;
NO:
  cout << "No" << endl;
  return 0;
}
