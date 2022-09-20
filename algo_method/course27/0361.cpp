#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<long long> a(n), b(m);
  for(auto& ai : a) cin >> ai;
  for(auto& bi : b) cin >> bi;

  int ans = 0;
  for(int j = m-1; j >= 0; ) {
    auto it = max_element(a.begin(), a.end());
    // 最大の荷物の重さが0以下=全ての荷物を格納したか、箱に入らないのでパスしたので終了
    if(*it <= 0) break;

    if(b[j] >= *it) {
      // 既に荷物(Ai)は格納されたとする
      *it = -1; 
      // 格納が行われたので箱側のインデックスを進める
      --j;
      ans++;
    }
    else {
      // 箱(Bi)に格納できない荷物なのでパスする
      *it = -1;
    }
  }

  cout << ans << endl;

  return 0;
}
