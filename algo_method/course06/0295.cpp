#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  regex reg{R"(\d{3}\-\d{4})"};
  smatch m;

  cout << (regex_search(s,m,reg)?"Yes":"No") << endl;
  return 0;
}
