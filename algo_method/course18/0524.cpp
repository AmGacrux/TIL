#include <bits/stdc++.h>
using namespace std;

void printVec(const vector<int> &a) {
  int n = a.size();

  for(int i = 0; i < n; ++i) {
    cout << a[i];
    if(i != n-1) cout << " ";
    else cout << endl;
  }
}

void align(vector<int> &a, int start, int end) {
  int k = start;
  while(true) {
    int l = (2*k+1) < end ? a[2*k+1] : 0;
    int r = (2*k+2) < end ? a[2*k+2] : 0;

    if(!l && !r) break;
    else if(a[k] >= l && a[k] >= r) break;
    else if(l >= r) {
      swap(a[k], a[2*k+1]);
      k = 2*k+1;
    }
    else {
      swap(a[k], a[2*k+2]);
      k = 2*k+2;
    }
  }
}

void makeheap(vector<int> &a) {
  int n = a.size();

  for(int x = n/2-1; x >= 0; --x) {
    align(a, x, a.size());
  }
}

void heapsort(vector<int> &a) {
  int n = a.size();

  for(int i = n-1; i >= 0; --i) {
    swap(a[0], a[i]);
    makeheap(a);
  }
}

void moveroot(vector<int> &a, int end) {
  swap(a[0], a[end]);
  align(a, 0, end);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n,0);
  for(auto &ai : a) cin >> ai;

  makeheap(a);

  for(int i = n-1; i > 0; --i) {
    moveroot(a, i);
    if(i == m) printVec(a);
  }

  printVec(a);

  return 0;
}
