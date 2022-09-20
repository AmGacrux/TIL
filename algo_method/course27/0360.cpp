#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  vector<int> a(4,0), p{50,10,5,1};
  for(auto& ai : a) cin >> ai;

  int ans = 0;
  for(int i = 0; i < 4; ++i) {
    while(x >= p[i] && a[i] > 0) {
        x -= p[i];
        a[i]--;
        ans++;
    }
  }

  cout << ans << endl;

  return 0;
}

// Note: minを用いた使用枚数決定処理(解答例より)
// int usage_amount = x / p[i];
// usage_amount = min(usage_amount, a[i]);
// ans += usage_amount;
// x -= (usage_amount * p[i]);
