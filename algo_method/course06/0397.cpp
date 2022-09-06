#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  regex reg{R"(ru(?=r))"};

  s = regex_replace(s, reg, "ra");

  cout << s << endl;

  return 0;
}
