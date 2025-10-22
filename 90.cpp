#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, n;
	cin >> a;
	n += a / 100;
	a -= n * 100;
	n += a / 10;
	a -= (a / 10) * 10;
	n += a;
	cout << n;
}