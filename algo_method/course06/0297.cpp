#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  regex reg{R"(1\+1)"};
  smatch m;

  bool search = regex_search(s, m, reg);
  cout << (search?"Yes":"No") << endl;

  return 0;
}
