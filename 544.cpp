#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::pow;

int hyw(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;
    switch (n % 3){
        case 0:
        return (int)pow(3, n / 3);
        case 1:
        return (int)pow(3, n / 3 - 1) * 2 * 2;
        case 2:
        return (int)pow(3, n / 3) * 2;
    }
}

int main() {
    int n;cin>>n;
    cout<<hyw(n)<<'\n';
}