#include <bits/stdc++.h>
using namespace std;

template <typename T>
void printVec(vector<T> v) {
  for(const auto& vi : v) {
    cout << vi << " ";
  }
  cout << endl;
}

template <typename T>
void quicksort(vector<T> &v) {
  if(!v.size()) return;

  int n = v.size(), pivot = static_cast<int>(n/2);

  vector<int> l,r;
  for(int i = 0; i < n; ++i) {
    if(i == pivot) continue;
    else if(v[i] < v[pivot]) l.push_back(v[i]);
    else r.push_back(v[i]);
  }

  quicksort(l);
  quicksort(r);

  l.push_back(v[pivot]);
  l.insert(l.end(), r.begin(), r.end());
  v = l;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0); 
  for(auto& ai : a) cin >> ai;

  quicksort(a);
  printVec(a);

  return 0;
}
