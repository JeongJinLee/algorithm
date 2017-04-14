#include <stdio.h>
int main(void) {
	int n, k;
	scanf("%d %d", &n,&k);
	int a=1, b=1,c=1;
	for (int i = 1; i <= n; i++) {
		a = a*i;
	}
	for (int i = 1; i <= k; i++)
		b = b*i;
	for (int i = 1; i <= n - k; i++)
		c = c*i;
	printf("%d\n", a/(b*c));
	return 0;
}