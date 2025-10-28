#include <iostream>
using std::cout;
using std::cin;

int main() {
    int t[4]={6,28,496,8128};
    //牛魔的下一?完?33550336都八位?了，?能忍住不打表也是神人
    int a,b;cin>>a>>b;
    for(const int i:t) {
        if(i>=a&&i<=b) cout<<i<<"\n";
    }
}