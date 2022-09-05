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

  for(int i = 0; i < n-1; ++i) {
    vector<int>::iterator it = min_element(a.begin()+i, a.end());
    swap(a[i], *it);
    printVec(a);
  }
  return 0;
}
