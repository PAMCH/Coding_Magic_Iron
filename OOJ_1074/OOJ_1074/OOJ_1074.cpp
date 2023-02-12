#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, c, d, t;
	double max;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	max = double(a) / c + double(b) / d;
	t = 0;

	if (max < double(c) / d + double(a) / b) {
		max = double(c) / d + double(a) / b;
		t = 1;
	}
	if (max < double(d) / b + double(c) / a) {
		max = double(d) / b + double(c) / a;
		t = 2;
	}
	if (max < double(b) / a + double(d) / c) {
		max = double(b) / a + double(d) / c;
		t = 3;
	}

	printf("%d\n", t);

	return 0;
}