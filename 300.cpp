#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, count = 1;
	cin >> a;
	while (a > 9) {
		count++;
		a /= 10;
	}
	cout << count;
	return 0;
}