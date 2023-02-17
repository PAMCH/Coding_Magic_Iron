#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 13

char a[N + 1];
int n, sum;

void input() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", a);
		for (int j = 0; j < N; j++) {
			if (a[j] == 'A')
				sum += 4;
			else if (a[j] == 'K')
				sum += 3;
			else if (a[j] == 'Q')
				sum += 2;
			else if (a[j] == 'J')
				sum += 1;
		}
	}
}

int main()
{
	input();
	printf("%d\n", sum);

	return 0;
}