#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 6

char a[N + 1], b[N + 1];
int sum1 = 1, sum2 = 1;


void input() {
	scanf("%s", a);
	scanf("%s", b);
}


void core() {
	for (int i = 0; i < strlen(a); i++) {
		sum1 *= (a[i] - 'A' + 1);
	}
	for (int i = 0; i < strlen(b); i++) {
		sum2 *= (b[i] - 'A' + 1);
	}
}

void output() {
	if (sum1 % 47 == sum2 % 47)
		printf("GO\n");
	else
		printf("STAY\n");
}

int main()
{
	input();
	core();
	output();

	return 0;
}