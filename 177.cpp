#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin,text);
    int res=0;
    for (int i=0; i<text.length(); i++) {
        res += (unsigned char)text[i];
    }
    cout << res%256;
}