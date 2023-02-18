#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 75

char a[N + 2];
int n, lef, rig;

void input() {
	scanf("%s", &a[1]);
	n = strlen(&a[1]);
}

int isPalindrome(int start, int end) {
	for (int i = start, j = end; i <= end; i++, j--) {
		if (a[i] != a[j]) {
			return 0;
		}
	}
	return 1;
}

void core() {
	int max = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (isPalindrome(i, j) == 1 && max < j - i + 1) {
				max = j - i + 1;
				lef = i;
				rig = j;
			}
		}
	}
}

void output() {
	for (int i = lef; i <= rig; i++) {
		printf("%c", a[i]);
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}