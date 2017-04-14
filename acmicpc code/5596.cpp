#include <stdio.h> 
int main()
{
	int a[4], b[4];
	scanf("%d %d %d %d", &a[0],&a[1],&a[2],&a[3]);
	scanf("%d %d %d %d", &b[0], &b[1], &b[2], &b[3]);
	int sum1 = a[0] + a[1] + a[2] + a[3];
	int sum2 = b[0] + b[1] + b[2] + b[3];
	printf("%d\n", (sum1>sum2)?sum1:sum2);
	return 0;
}