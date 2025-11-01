#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				if (101 * (i + k) + 20 * j == n)
					cout << i << " " << j << " " << k << endl;
			}
		}
	}
	return 0;
}