#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; 
  string yyyy, m;
  cin >> n >> yyyy >> m;

  // zero fill month
  stringstream ss;
  ss << setw(2) << setfill('0') << m;
  string mm(ss.str());

  // prepare regex string
  stringstream s2;
  s2 << "([^_]+(?=_" << yyyy << mm << "\\d{2}\\.pdf))";
  regex reg{s2.str()};
  smatch res;

  for(int i = 0; i < n; ++i) {
    string si;
    cin >> si;
    bool search = regex_search(si, res, reg);
    if(search) cout << res[0].str() << endl;
  }

  return 0;
}
