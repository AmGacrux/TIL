#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0); 
  for(auto& ai : a) cin >> ai;

  for(int i = 0; i < n; ++i) {
    bool isFinished = true;
    for(int j = 1; j < n; ++j) {
      if(a[j-1] > a[j]) {
        int tmp = a[j];
        a[j] = a[j-1];
        a[j-1] = tmp;
        isFinished = false;
      }
    }
    if(isFinished) break;
    for(const auto& ai : a) {
      cout << ai << " ";
    }
    cout << endl;      
  }
  return 0;
}
