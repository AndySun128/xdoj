#include <stdio.h>

int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float p = a * b * c;
	printf("%.3f", p);
	return 0;
}