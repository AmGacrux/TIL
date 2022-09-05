#include <bits/stdc++.h>
//#include <iostream>
//#include <random>
//#include <vector>
using namespace std;

mt19937 mt;
random_device rnd;

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
  int n = v.size();

  vector<T> l,r;
  int pivot = (mt()%n);
  for(int i = 0; i < n; ++i) {
    if(i == pivot) continue;
    else if(v[i] == v[pivot]) {
      if(mt()%2) l.push_back(v[i]);
      else r.push_back(v[i]);
    }
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
  mt.seed(rnd());

  int n;
  cin >> n;
  vector<int> a(n,0); 
  for(auto& ai : a) cin >> ai;

  quicksort(a);
  printVec(a);

  return 0;
}
