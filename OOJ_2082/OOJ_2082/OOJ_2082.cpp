#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 7

char a[N + 2];
int n, b[3] = { 9,3,7 }, idx, sum;

void input() {
	scanf("%s", &a[1]);
	n = strlen(&a[1]);
}


void core() {
	for (int i = n; i >= 1; i--) {
		if (a[i] == '?')
			idx = i;
		else
			sum += (a[i] - '0') * b[(n - i) % 3];
	}
}

void output() {
	for (int i = 0; i <= 9; i++)
		if ((sum + i * b[(n - idx) % 3]) % 10 == 0)
			a[idx] = i + '0';
	printf("%s\n", &a[1]);
}

int main()
{
	input();
	core();
	output();

	return 0;
}