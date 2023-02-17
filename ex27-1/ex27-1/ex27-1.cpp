#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>

void swap(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d %d\n", a, b);
	swap(a, b);
	printf("%d %d\n", a, b);

	return 0;
}