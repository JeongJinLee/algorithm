#include<stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int a[5] = { 0, };
		scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
		double ans = 0;
		ans = a[0] * 350.34 + a[1] * 230.90 + a[2] * 190.55 + a[3] * 125.30 + a[4] * 180.90;
		printf("$%.2lf\n",ans);
	}
	return 0;
}