#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = 0;
  string s = "";
  for(int i = 0; (1<<i) <= n; ++i) {
    if(n&(1<<i)) {
      s += to_string(i);
      a++;
      if((1<<i) < n) {
        s += " ";
      }
    }
  }
  cout << a << endl << s << endl;

  return 0;
}

/*
 ループ内の(1<<i)をまとめて短くしたパターン
 */
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a = 0; string s = "";
  for(int i = 0, b = (1<<i); b <= n; ++i, b=(1<<i)) {
    if(n&b) {
      s += to_string(i);
      a++;
      if(b < n) s += " ";
    }
  }
  cout << a << endl << s << endl;
  return 0;
}
*/
