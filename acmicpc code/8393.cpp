#include <stdio.h>

int main(void){
	int n,i,sum;
	sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum += i;

	printf("%d\n", sum);
	return 0;
}