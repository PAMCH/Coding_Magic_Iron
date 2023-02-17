#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 61

int n;

void input() {
	scanf("%d", &n);
}

void output() {
	for (int i = 1; i <= n; i++) {
		char a[N + 1];

		scanf("%s", a);
		if (a[strlen(a) - 1] % 2)
			printf("odd\n");
		else
			printf("even\n");
	}
}

int main()
{
	input();
	output();

	return 0;
}