#include <stdio.h>
using namespace std;

int main() {
	char a, b, c, d, e;
	scanf("%c|%c|%c|%c|%c", &a, &b, &c, &d, &e);
	a += 32;
	b += 32;
	c += 32;
	d += 32;
	e += 32;
	printf("%c%c%c%c%c!", a, b, c, d, e);
}