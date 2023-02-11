#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, t;
	double tax;

	scanf("%d", &n);
	scanf("%d", &t);
	
	tax = n * (t * 0.01);
	printf("%.0lf\n", round(tax));

	return 0;
}