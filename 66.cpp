#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a;
	float ave;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ave += a;
	}
	printf("%.2f", ave / n);
}