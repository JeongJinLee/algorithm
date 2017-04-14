#include <stdio.h> 
int main()
{
	int a[4];
	scanf("%d%d%d%d", &a[0],&a[1],&a[2],&a[3]);
	int hap = a[0] + a[1] + a[2] + a[3];
	printf("%d\n%d\n", hap/60, hap%60);
	return 0;
}