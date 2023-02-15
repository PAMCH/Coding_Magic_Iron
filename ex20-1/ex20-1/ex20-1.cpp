#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int s, e, arr[11] = { 0,10,20,30,40,50,60,70,80,90,100 };

void input() {
	scanf("%d %d", &s, &e);
}

void core() {
	for (int i = s; i <= (s + e) / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[e - i + s];
		arr[e - i + s] = temp;
	}
}

void output() {
	for (int i = 1; i <= 10; i++) {
		printf("%d ", arr[i]);
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}