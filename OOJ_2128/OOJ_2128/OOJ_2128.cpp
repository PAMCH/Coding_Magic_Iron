#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 15

char a[N + 5];
int n;

void input() {
	scanf("%s", &a[1]);
	n = strlen(&a[1]);
}

void line1(int k) {
	if (k % 3 == 0)
		printf("..*.");
	else
		printf("..#.");
}

void line2(int k) {
	if (k % 3 == 0)
		printf(".*.*");
	else
		printf(".#.#");
}

void line3(int k) {
	if (k > 1 && (k % 3 == 0 || k % 3 == 1))
		printf("*.%c.", a[k]);
	else
		printf("#.%c.", a[k]);
}

void output() {
	for (int i = 1; i <= n; i++)
		line1(i);
	printf(".\n");
	for (int i = 1; i <= n; i++)
		line2(i);
	printf(".\n");
	for (int i = 1; i <= n; i++)
		line3(i);
	if (n % 3 == 0)
		printf("*\n");
	else
		printf("#\n");
	for (int i = 1; i <= n; i++)
		line2(i);
	printf(".\n");
	for (int i = 1; i <= n; i++)
		line1(i);
	printf(".\n");
}
int main()
{
	input();
	output();

	return 0;
}