#include <bits/stdc++.h>
using namespace std;

void printVec(const vector<int> &a) {
  for(const auto &ai : a) {
    cout << ai << " ";
  }
  cout << endl;
}

void mergesort(vector<int> &a) {
  int n = a.size();
  if(!n) return;

  vector<int> l,r;
  for(int i = 0; i < (n/2); ++i) l.push_back(a[i]);
  for(int i = (n/2); i < n; ++i) r.push_back(a[i]);

  if(l.size() > 1) mergesort(l);
  if(r.size() > 1) mergesort(r);

  list<int> L;
  for(auto it = l.begin(); it != l.end(); ++it) L.push_back(*it);
  for(auto rit = r.rbegin(); rit != r.rend(); ++rit) L.push_back(*rit);

  a.clear();

  while(L.size()) {
    if(L.front() <= L.back()) {
      a.push_back(L.front());
      L.pop_front();
    }
    else {
      a.push_back(L.back());
      L.pop_back();
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0);
  for(auto &ai : a) cin >> ai;

  mergesort(a);

  printVec(a);

  return 0;
}
