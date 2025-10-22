#include <bits/stdc++.h>
using namespace std;

int main() {
    float a,b,c,d;cin >> a >> b >> c;
    d=b*b - 4*a*c;
    if(d<0) {
        cout<<"No real root";
    }else if(d==0) {
        printf("%.2f",(-b)/2/a);
    }else if (d>0) {
        printf("%.2f %.2f",(-b+sqrt(d))/2/a,(-b-sqrt(d))/2/a);
    }
}