#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

const int n = 6;
const int a[n + 1] = { 0,500,100,50,10,5,1 };

int moneyCnt(int money) {
	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		cnt += money / a[i];
		money %= a[i];
	}

	return cnt;
}

int main()
{
	int money;

	scanf("%d", &money);

	printf("%d\n", moneyCnt(1000 - money));

	return 0;
}