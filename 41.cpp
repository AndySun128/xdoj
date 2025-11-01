#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	float ave;
	cin >> n;
	int a[n];
	int b[6] = {0, 0, 0, 0, 0, 0};
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i : a) {
		if (i >= 0 && i <= 50) {
			b[0]++;
		} else if (i >= 51 && i <= 100) {
			b[1]++;
		} else if (i >= 101 && i <= 150) {
			b[2]++;
		} else if (i >= 151 && i <= 200) {
			b[3]++;
		} else if (i >= 201 && i <= 300) {
			b[4]++;
		} else {
			b[5]++;
		}
		ave += i;
	}
	printf("%.2f\n", ave / n);
	for (int i : b)
		cout << i << " ";
}