#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define MIN2(X,Y) ((X)<(Y)?(X):(Y))

int k;

int main()
{
	int n, m;

	scanf("%d", &k);

	for (int i = 1; i <= k; i++) {
		scanf("%d %d", &n, &m);
		printf("%d\n", MIN2(n, m) * 2 - 2);
	}

	return 0;
}