#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int arr[11] = { 0,7,-5,4,-99,45,11,0,8,50,77 };
	int i, max, min;

	max = min = arr[1];

	for (i = 2; i <= 10; i++) {
		max = max < arr[i] ? arr[i] : max;
		min = min > arr[i] ? arr[i] : min;
	}

	printf("%d\n%d\n", max, min);

	return 0;
}