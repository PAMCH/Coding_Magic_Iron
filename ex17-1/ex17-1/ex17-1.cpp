#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define MAX2(X, Y) ( (X) > (Y) ? (X) : (Y) )
#define MIN2(X, Y) ( (X) < (Y) ? (X) : (Y) )


int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", MAX2(MAX2(a, b), c));
	printf("%d\n", MIN2(MIN2(a, b), c));

	return 0;
}