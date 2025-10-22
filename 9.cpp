#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.3f %.3f", (float)pow(a / 10, 3) * 3.1415926 * 7.86 / 6, (float)pow(b / 10, 3) * 3.1415926 * 19.3 / 6);
	return 0;
}