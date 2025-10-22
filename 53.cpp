#include <iostream>
using namespace std;

int main() {
	char b = 'D';
	int a;
	cin >> a;
	if (a < 60) {
		cout << 'E';
	} else if (a < 70) {
		cout << 'D';
	} else if (a < 80) {
		cout << 'C';
	} else if (a < 90) {
		cout << 'B';
	} else {
		cout << 'A';
	}
}