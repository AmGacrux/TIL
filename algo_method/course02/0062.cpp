#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ans;
  for(int i = 0, l = 0, r = 0; i < n; ++i) {
    string s;
    cin >> s;
    if(s == "left") {
        l++;
    }
    else if(s == "right") {
        r++;
    }
    ans = (l>r)?"left":(l==r)?"same":"right";  
  }

  cout << ans << endl;

  return 0;
}
