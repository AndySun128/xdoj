#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, d, h, m;
	cin >> s;
	d = s / 86400;
	s -= d * 86400;
	h = s / 3600;
	s -= h * 3600;
	m = s / 60;
	s -= m * 60;
	printf("%d %d %d %d", d, h, m, s);
}