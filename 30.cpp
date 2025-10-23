#include <iostream>
using std::cout;
using std::cin;

int main() {
    int t[4]={6,28,496,8128};
    //牛魔的下一个完数33550336都八位数了，这能忍住不打表也是神人
    int a,b;cin>>a>>b;
    for(const int i:t) {
        if(i>=a&&i<=b) cout<<i<<"\n";
    }
}