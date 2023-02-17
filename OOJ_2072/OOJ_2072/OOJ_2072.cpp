#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 10

char a[N + 2];
int idx, sum;

void input() {
	scanf("%s", &a[1]);
}


void core() {
	for (int i = 1; i <= N; i++)
		if (a[i] == '?')
			idx = i;
		else if (i == N && a[i] == 'X')
			sum += N;
		else
			sum += (N - i + 1) * (a[i] - '0');
}

void output() {
	int num;

	if (idx == N && (sum + 10) % 11 == 0)
		printf("X\n");
	else
	{
		int num = -1;
		for (int i = 0; i <= 9; i++)
			if ((sum + (N - idx + 1) * i) % 11 == 0)
				num = i;
		printf("%d\n", num);
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}