#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n,-1);
  for(int i = 0; i < k; ++i) cin >> v[i];
  
  int ans = 0;
  for(const auto vk : v) { 
    if(vk >= 0) ans += (1<<vk);
  }

  cout << ans << endl;

  return 0;
}
