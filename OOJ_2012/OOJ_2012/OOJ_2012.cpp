#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdlib>

void core(int n1, int *n2) {
	while (n1 == *(n2))
	{
		(*n2) += 5;
	}
}

void output(int n1, int n2, int n3) {
	int p1 = 0, p2, p3;

	p2 = (n1 > n2) ? p1 + 100 : p1 - 100;
	p3 = (n1 > n3) ? p1 + 100 : p1 - 100;

	if (p2 == p3)
		p3 = (n2 > n3) ? p2 + 50 : p2 - 50;

	if (abs(p1 - p3) == 50)
		printf("good\n");
	else if (abs(p1 - p3) == 100)
		printf("normal\n");
	else
		printf("bad\n");
}

int main()
{
	for (int i = 1; i <= 3; i++) {
		int a, b, c;

		scanf("%d %d %d", &a, &b, &c);

		core(a, &b);
		core(a, &c);
		core(b, &c);
		output(a, b, c);
	}


	return 0;
}