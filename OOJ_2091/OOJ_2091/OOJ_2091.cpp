#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 10

int b, d, c[N + 1];

void input() {
	scanf("%d %d", &b, &d);
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= d; j++) {
			int x;
			scanf("%1d", &x);
			c[j] += x;
		}
	}
}

void output() {
	for (int i = 1; i <= d; i++) {
		printf("%d",c[i] % 10);
	}
}
int main()
{
	input();
	output();

	return 0;
}