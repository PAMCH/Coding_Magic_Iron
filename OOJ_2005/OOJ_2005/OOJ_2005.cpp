#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

char a[N + 2], b[N + 2];
int n, m;

void input() {
	scanf("%s", a+1);
	scanf("%s", b+1);

	n = strlen(a + 1);
	m = strlen(b + 1);
}


void left() {
	char temp = a[1];
	for (int i = 1; i <= n - 1; i++)
		a[i] = a[i + 1];
	a[n] = temp;
}

void right() {
	char temp = a[n];
	for (int i = n; i >= 2; i--)
		a[i] = a[i - 1];
	a[1] = temp;
}

void core() {
	for (int i = 1; i <= m; i++) {
		if (b[i] == 'L')
			left();
		else
			right();
	}

	printf("%s\n", a + 1);
}

void output() {

}

int main()
{
	input();
	core();
	output();

	return 0;
}