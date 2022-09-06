#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  regex reg{R"(asian(?=(\s[a-z]+){5,}))"};
  smatch m;

  cout << regex_replace(s, reg, "global") << endl;

  return 0;
}
