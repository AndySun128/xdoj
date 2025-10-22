#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;
	string b = "Yes";
	for (int i = 0; i < a.length() / 2 + 2; i++) {
		if (a[i] != a[a.length() - i - 1]) {
			b = "No";
		}
	}
	cout << b;
	return 0;
}