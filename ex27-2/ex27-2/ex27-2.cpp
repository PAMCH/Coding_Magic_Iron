#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>

int func(const int& num1, const int& num2) {
	return num1 + num2;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("%d\n%d\n", func(a, b), func(10, 20));

	return 0;
}