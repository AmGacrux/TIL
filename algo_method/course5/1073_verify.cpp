#include <bits/stdc++.h>
using namespace std;

void print(long long a) {
  for(int i = 8*sizeof(int); i >= 0; --i) {
    cout << ((a & (1<<i))?1:0);
    if(i%5==0) cout << " ";
  }
  cout << endl;
}

int main() {
  //short a;
  //cin >> a;
  //for(int i = 8*sizeof(short); i >= 0; --i) {
  //  cout << ((a & (1<<i))?1:0);
  //}
  //cout << endl;
  long long X = 581383915;
  cout << "X = " << X << endl;
  print(X);

  cout << "p = 2^30-1 : " << endl;
  long long p = (long long)(1 << 30) - 1;
  print(p);

//  cout << "544 : " << endl;
//  print(544);
  long long q = 992;
  cout << q << " : " << endl;
  print(q);

  long long M = p ^ q;
  cout << "M = p ^ " << q << " = " << M << endl;
  print(M);

  long long Xd = X & M;
  cout << "Xd = X & M = " << Xd << endl;
  print(Xd);

  long long ans = Xd | 544;
  cout << "ans = Xd | 544 = " << ans << endl;
  print(ans);

  return 0;
}
