#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,c;char b;scanf("%d%c%d",&a,&b,&c);
    switch(b) {
        case '+':cout<<a<<b<<c<<'='<<a+c;break;
        case '-':cout<<a<<b<<c<<'='<<a-c;break;
        case '*':cout<<a<<b<<c<<'='<<a*c;break;
        case '/':if (c)cout<<a<<b<<c<<'='<<a/c;break;
        case '%':if (c)cout<<a<<b<<c<<'='<<a%c;break;
        default:break;
        }
    return 0;
}