#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  regex reg{R"(^[a-zA-Z0-9]+\@[a-zA-Z0-9]+\.[a-zA-Z0-9]{1,4}$)"};
  smatch m;

  cout << (regex_search(s,m,reg)?"Yes":"No") << endl;
  return 0;
}
