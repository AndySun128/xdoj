#include <iostream>
using std::cout;
using std::cin;

int main() {
    int n,count=0;cin>>n;
    while (n-1) {
        if (n&1)n=3*n+1;
        else n/=2;
        count++;
    }
    cout<<count;
}