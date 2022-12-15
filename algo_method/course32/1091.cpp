#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin >> n;

    auto&& isLeapYear = [&](auto& n){
        if(n % 4 == 0) {
            if(n % 400 == 0) return true;
            if(n % 100 == 0) return false;
            return true;
        }
        else {
            return false;
        }
    }(n);

    cout << (isLeapYear ? "Yes" : "No") << endl;

    return 0;
}
