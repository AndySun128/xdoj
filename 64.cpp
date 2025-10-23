#include <iostream>
using std::cout;
using std::cin;

int main() {
    int n,m;cin>>n;
    for(int i=0;i<n;i++)cout<<2*((n-1)*n/2+i)+1<<" ";
}