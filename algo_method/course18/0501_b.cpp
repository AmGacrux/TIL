#include <bits/stdc++.h>
using namespace std;

mt19937 mt;
random_device rnd;

void quicksort(vector<int> &v) {
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

void randomQuicksort(vector<int> &v) {
    if(!v.size()) return;
    int n = v.size();

    vector<int> l,r;
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

    auto mid = (n%2==0) ? (a[n/2-1]+a[n/2])/2.0 : a[(n-1)/2];

    cout << fixed << setprecision(6) << mid << endl;

    return 0;
}
