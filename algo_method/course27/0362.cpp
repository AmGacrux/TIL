#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int day = 0;
  while(n > 0) {
    day++;
    if(!(n%2)) n /= 2;
    else n--;
  }
  cout << day << endl;

  return 0;
}
