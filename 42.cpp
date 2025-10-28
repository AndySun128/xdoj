#include <iostream>
using std::cout;
using std::cin;

int main() {
    int n,m;cin>>n>>m;
    n%m?cout<<n/m<<' '<<n%m:(cout<<"yes");
}