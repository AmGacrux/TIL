#include <bits/stdc++.h>
using namespace std;

template <typename T>
void printVec(vector<T> v) {
  for(const auto& vi : v) {
    cout << vi << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0); 
  for(auto& ai : a) cin >> ai;

  for(int i = 1, pos; i < n; ++i) {
    pos = i;
    while(a[pos-1] > a[pos]) {
      swap(a[pos-1], a[pos]);
      pos--;
      if(pos == 0) break;
    }
    printVec(a);
  }
  return 0;
}
