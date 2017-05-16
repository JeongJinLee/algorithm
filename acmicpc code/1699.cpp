#include <stdio.h>
int d[100001] = { 0, };
int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		d[i] = i;
		for (int j = 1; j*j <= i; j++) {
			int temp = d[i - j*j] + 1;
			if (temp < d[i])
				d[i] = temp;
		}
	}
	printf("%d\n", d[n]);
	return 0;
}