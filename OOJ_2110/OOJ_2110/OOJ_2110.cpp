#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 50

int c, m, n, a[N + 1];

void input() {
	scanf("%d %d", &c, &m);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
}

void core() {
	int lef = 1, rig = m, mov = 0;

	for (int i = 1; i <= n; i++) {
		if (lef <= a[i] && a[i] <= rig) {
			continue;
		}
		else if (a[i] < lef) {
			mov += lef - a[i];
			rig -= (lef - a[i]);
			lef = a[i];
		}
		else {
			mov += a[i] - rig;
			lef += (a[i] - rig);
			rig = a[i];
		}
	}
	printf("%d\n", mov);
}

int main()
{
	input();
	core();

	return 0;
}