#include <iostream>
using std::cout;
using std::cin;

int main() {
    int m,n,q,r;cin>>m>>n>>q>>r;
    m==n*q+r?cout<<"yes":cout<<m/n<<' '<<m%n;
}