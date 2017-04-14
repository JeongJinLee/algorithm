#include <stdio.h>
int a[1000001] = { 0, };
int main(void) {
	int n, b, c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d%d", &b,&c);
	long long count = 0;
	count += n;//시험장 수만큼 총감독관 필요
	for (int i = 0; i < n; i++) {
		a[i] -= b;//총감독관 만큼 빼줌
		if (a[i] < 0)
			a[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		int temp = 0;
		temp = a[i] / c;
		count += temp;
		if (a[i] % c > 0)
			count++;
	}
	printf("%lld\n", count);
	return 0;
}