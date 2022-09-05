#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(1e5+1, 0);
  // 入力と集計
  for(int i = 0, li; i < n; ++i) { 
    cin >> li;
    a[li]++;
  }

  // 累積和
  vector<int> sums(1e5+1, 0);
  for(int i = 1; i <= 1e5+1; ++i) { 
    sums[i] = a[i] + sums[i-1];
  }

  int q;
  cin >> q;
  for(int i = 0, a, b; i < q; ++i) {
    cin >> a >> b;
    cout << (sums[b]-sums[a-1]) << endl;
  }

  return 0;
}
