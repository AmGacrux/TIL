#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<long long> a(n,0);

  long long min = numeric_limits<long long>::max();
  long long sum = 0;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] <= min) {
      min = a[i];
    }
    sum += a[i];
  }

  cout << (sum-min) << endl;

  return 0;
}
