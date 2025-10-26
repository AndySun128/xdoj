#include <algorithm>
#include <iostream>
using std::cin;
using std::cout;
using std::max;
using std::min;

int main() {
    int n;
    cin>>n;
    int s=n % 20;
    if(s<2||s>18)return 0;
    int b=(n-101*s) / 20;
    if(b<0||b>9)return 0;
    for (int a = max(1,s-9); a <= min(9,s-1); a++)cout<<a <<' '<< b <<' '<<s-a<<'\n';
    return 0;
}