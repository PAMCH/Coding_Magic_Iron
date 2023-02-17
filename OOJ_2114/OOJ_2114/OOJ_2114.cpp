#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 50

int n, cnt;
char a[N + 2];

void input() {
	scanf("%d", &n);
	scanf("%s", a + 1);
}


void core() {
	for (int i = 1; i <= n; i++) {
		if (a[i] == 'S') {
			cnt++;
		}
		else if (a[i] == 'L') {
			cnt++, i++;
		}
	}
	cnt++;

	printf("%d\n", n > cnt ? cnt : n);
}

int main()
{
	input();
	core();

	return 0;
}