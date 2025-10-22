#include <bits/stdc++.h>
using namespace std;

int main() {
    double m;int t;cin>>m>>t;
    t=(t<5)?0:t/5*2;
    if (m<3)cout<<round(10+t);
    else if (m<=10)cout<<round(10+(m-3)*2+t);
    else cout<<round(24+(m-10)*3+t);
}