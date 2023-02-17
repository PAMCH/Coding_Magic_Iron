#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 50

char a[N + 2];
int n, idx = 1;

void input() {
	scanf("%s", &a[1]);
	n = strlen(&a[1]);
}


void core() {
	for (int i = 1; i <= n; i++) {
		if (a[i] == 'A' && idx != 3)
			idx = 3 - idx;
		else if (a[i] == 'B' && idx != 1)
			idx = 5 - idx;
		else if (a[i] == 'C' && idx != 2)
			idx = 4 - idx;
	}

	printf("%d\n", idx);
}

int main()
{
	input();
	core();

	return 0;
}