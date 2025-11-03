#include <iostream>

using std::cin;
using std::cout;

int main() {
    unsigned int n,m,carry=0;cin>>n>>m;
    int count=0;
    while (n||m||carry) {
        if((n&1)+(m&1)+carry>1) {
            count++;
            carry=1;
        }else {
            carry=0;
        }
        n>>=1;m>>=1;
    }
    cout<<count;
}