#include <iostream>
using std::cin;
using std::cout;

int main() {
    int n,res=0;cin>>n;
    while (n) {res+=n%10;n/=10;}
    cout<<res;
}