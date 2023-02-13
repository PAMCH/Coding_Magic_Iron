#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int oneCount(int x) {
    int cnt = 0;
	while (x != 0)
	{
		cnt += x & 1;
		x >>= 1;
	}

	return cnt;
}

int main()
{
	int n;

	scanf("%d", &n);

	int cnt1 = oneCount(n);

	while (1)
	{
		int cnt2 = oneCount(++n);

		if (cnt1 == cnt2) {
			printf("%d\n", n);
			break;
		}
	}

    return 0;
}