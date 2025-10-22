#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;cin >> a >> b;
    if (b==2) {
        if (!(a%400)||!(a%4)&&a%100)cout << 29;
        else cout << 28;
    }else if (b<8&&b%2||b>7&&!(b%2))cout << 31;
    else cout << 30;
}