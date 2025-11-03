#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;

int main() {
    std::string a, b, res = "";
    cin >> a;
    cin >> b;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; i < std::max(a.length(), b.length()); i++) {
        int digitA = (i < a.length()) ? (a[i] - '0') : 0;
        int digitB = (i < b.length()) ? (b[i] - '0') : 0;
        int sum = digitA + digitB + carry;
        res += (sum % 10) + '0'; // Convert digit to char
        carry = sum / 10;
    }
    if (carry > 0) {
        res += carry + '0';
    }
    std::reverse(res.begin(), res.end());
    cout << res;
}