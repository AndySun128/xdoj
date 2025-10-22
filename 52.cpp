#include <iostream>
using namespace std;

int main() {
	char a, b;
	cin >> a;
	if (a > 96) {
		b = a - 32;
	} else if (a > 64) {
		b = a + 32;
	} else {
		b = a;
	}
	cout << b;
	return 0;
}