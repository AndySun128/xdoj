#include <bits/stdc++.h>
using namespace std;

int main() {
    int d,e,l;cin >> d >> e >> l;
    l = l%10;cout << l << " ";
    if (d >5 || e <200)cout << "no";
    else {
        if (e <400) {
            if (l == d || l == (d+5)%10)cout << "yes";
            else cout << "no";
        }else{
            if (d%2==l%2)cout << "yes";
            else cout << "no";
        }
    }
}