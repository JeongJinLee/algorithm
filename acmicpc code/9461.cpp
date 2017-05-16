#include <stdio.h>
long long d[101] = { 0, };
int main(void) {
	int t;
	scanf("%d", &t);
	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	d[4] = 2;
	d[5] = 2;

	for (int i = 6; i < 101; i++)
		d[i] = d[i - 1] + d[i - 5];

	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", d[n]);
	}
	return 0;
}