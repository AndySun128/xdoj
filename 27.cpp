
#include <bits/stdc++.h>
using namespace std;

int main() {
	float a;
	cin >> a;
	if (a < 111) {
		printf("%.2f", a * 0.5);
	} else if (a < 211) {
		printf("%.2f", 55 + (a - 110) * 0.55);
	} else {
		printf("%.2f", 110 + (a - 210) * 0.7);
	}
}