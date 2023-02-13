#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int digiMul(int x) {
    int mul = 1;
	while (x)
	{
		if (x % 10 != 0) {
			mul *= x % 10;
		}
		x /= 10;
	}

	return mul;
}

int main()
{
	int n;

	scanf("%d", &n);

	while (n >= 10) {
		printf("%d ", n);
		n = digiMul(n);
		printf("%d\n", n);
	}

    return 0;
}