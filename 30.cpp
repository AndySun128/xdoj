#include <iostream>
using std::cout;
using std::cin;

int main() {
    int t[4]={6,28,496,8128};
    //���]���U�@?��?33550336���K��?�F�A?��Ԧ�����]�O���H
    int a,b;cin>>a>>b;
    for(const int i:t) {
        if(i>=a&&i<=b) cout<<i<<"\n";
    }
}