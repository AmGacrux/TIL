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

void makeheap(vector<int> &a) {
  int n = a.size();

  for(int x = n/2-1; x >= 0; --x) {
    int k = x;
    while(true) {
      int l = (2*k+1) < n ? a[2*k+1] : 0;
      int r = (2*k+2) < n ? a[2*k+2] : 0;

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
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n,0);
  for(auto &ai : a) cin >> ai;

  makeheap(a);

  printVec(a);

  return 0;
}
