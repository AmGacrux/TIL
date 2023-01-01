#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int a = 1;
    for(int i = 1; i < S.size(); ++i) {
        if(S.at(i) == '+') {
            a++;
        }
        else if(S.at(i) == '-') { 
            a--;
        }
    }
    cout << a << endl;
}
