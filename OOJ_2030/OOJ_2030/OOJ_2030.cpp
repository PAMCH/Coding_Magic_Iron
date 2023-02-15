#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int m, L, t, res1, res2;

void input() {
	scanf("%d %d %d", &m, &L, &t);
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void core() {
	res1 = 0, res2 = t;

	if (m > L)
		swap(&m, &L);

	for (int i = t / m; i >= 0; i--) {
		int r = t - i * m;
		int cnt = i + r / L;

		if (res2 > r % L)
			res1 = cnt, res2 = r % L;
		else if (res2 == r % L && res1 < cnt)
			res1 = cnt;
	}
}

void output() {
	if (res2 == 0)
		printf("%d\n", res1);
	else
		printf("%d %d\n", res1, res2);
}

int main()
{
	input();
	core();
	output();

	return 0;
}