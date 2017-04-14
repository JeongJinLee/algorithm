#include <stdio.h>
int p[1001] = { 0, };
int d[1001] = { 0, };
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &p[i]);


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			d[i] = max(d[i], d[i - j] + p[j]);
		}
	}

	printf("%d\n", d[n]);
	return 0;
}