#include <bits/stdc++.h>
using std::cout;
using std::cin;

int main() {
    int t[6]={100,50,20,10,5,1};
    int m;cin>>m;
    for(int i:t) {
        cout<<m/i<<" ";
        m=m%i;
    }
}