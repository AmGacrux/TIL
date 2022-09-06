#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  regex reg{R"(cat|dog)"};
  smatch m;

  bool search = regex_search(s, m, reg);
  cout << (search?"Yes":"No") << endl;

  return 0;
}
