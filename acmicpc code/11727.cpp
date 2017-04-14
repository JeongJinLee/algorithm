#include <stdio.h>
unsigned long long d[1001] = { 0, };
int main()
{
	int n;
	scanf("%d", &n);
	d[0] = 1;
	d[1] = 1;
	d[2] = 3;
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2]*2;
		d[i]=d[i] % 10007;
	}
	printf("%llu", d[n]);
	return 0;
}