#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	printf("%.6lf\n", (double)n*n*(3.1415926535897932384));
	printf("%.6lf\n", (double)n*n*2.0);
	return 0;
}