#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; char ans = 0b01111111;
  cin >> n;
  switch(n) {
    case 0:
      ans ^= (1<<3);
      break;
    case 1:
      ans ^= ((1<<0)|(1<<1)|(1<<3)|(1<<4)|(1<<6));
      break;
    case 2:
      ans ^= ((1<<1)|(1<<5));
      break;
    case 3:
      ans ^= ((1<<1)|(1<<4));
      break;
    case 4:
      ans ^= ((1<<0)|(1<<4)|(1<<6));
      break;
    case 5:
      ans ^= ((1<<2)|(1<<4));
      break;
    case 6:
      ans ^= (1<<2);
      break;
    case 7:
      ans ^= ((1<<3)|(1<<4)|(1<<6));
      break;
    case 9:
      ans ^= (1<<4);
      break;
    default:
      break;

  }
  cout << (int)ans << endl;

  return 0;
}
