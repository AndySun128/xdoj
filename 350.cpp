#include <iostream>
using std::cin;
using std::cout;

int main() {
    int n;cin>>n;
    cout<<n/86400<<" ";
    n%=86400;
    cout<<n/3600<<" ";
    n%=3600;
    cout<<n/60<<" ";
    n%=60;
    cout<<n;
    return 0;
}