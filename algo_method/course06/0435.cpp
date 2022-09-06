#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  regex reg{R"(algo(?!method)(?!rithm)[a-z]{5,})"};
  smatch m;

  cout << (regex_search(s,m,reg)?"Yes":"No") << endl;

  return 0;
}
