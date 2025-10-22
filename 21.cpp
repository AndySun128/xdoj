#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    for (int i = 10000; i >= 1; i/=10) {
        cout << a/i << " ";
        a -= (a/i)*i;
    }
}

