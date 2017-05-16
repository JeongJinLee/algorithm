#include <stdio.h>
int d[31] = { 0, };
int main(void) {
	int n;
	scanf("%d", &n);
	d[0] = 1;
	d[2] = 3;
	d[4] = 11;
	for (int i = 6; i <= n; i++)
	{
		d[i] = 3 * d[i - 2];
		for (int j = 2; j * 2 <= i;j++) {
			d[i] += (2 * d[i - j*2]);
		}
	}
	printf("%d\n", d[n]);
	return 0;
}