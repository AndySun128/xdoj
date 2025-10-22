#include <bits/stdc++.h>
using namespace std;

int main() {
    double a;cin>>a;
    if (a<0) {
        a = pow(a+1,2)+2*a+1.0/a;
    }else a=sqrt(a);
    printf("%.2f",a);
}