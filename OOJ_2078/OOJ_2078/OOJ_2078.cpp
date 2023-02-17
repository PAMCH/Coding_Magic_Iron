#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 1000

char a[N + 2];
int n;

void input() {
	scanf("%s", &a[1]);
	n = strlen(&a[1]);
}

void core() {
	int cnt = 1;

	for (int i = 1; i <= n; i++) {
		if (a[i] == a[i + 1])
			cnt++;
		else {
			printf("%d%c", cnt, a[i]);
			cnt = 1;
		}
	}
}


int main()
{
	input();
	core();

	return 0;
}