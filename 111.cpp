#include <iostream>
using std::cout;
using std::cin;

int main() {
    int n;cin>>n;
    cout<<(n%5||n%7?"no":"yes");
}