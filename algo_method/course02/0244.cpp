#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n, 0);
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int cnt = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = i+1; j < n; ++j) {
      if(a[i]+a[j] <= k) {
        cnt++;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}
/*
   int main() {
   int n, k;
   cin >> n >> k;
   vector<int> a(n, 0);
   for(int i = 0; i < n; ++i) {
   cin >> a[i];
   }
   vector<vector<int>> x(n, vector<int>(n));
   for(int i = 0; i < n; ++i) {
   for(int j = 0; j < n; ++j) {
   if(i == j) x[i][j] = 201;
   else {
   x[i][j] = (a[i] + a[j]);
   }
   }
   }
   int cnt = 0;
   for(int i = 0; i < n; ++i) {
   for(int j = 0; j < n; ++j) {
   if(x[i][j] <= k) {
   cnt++;
   }
   }
   }
   cout << (cnt/2) << endl;

   return 0;
   }
   */
