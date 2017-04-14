#include <stdio.h>

int main(void){
	int n, i, j,k;

	scanf("%d", &n);
	for (i = 0,k=n; i <n; i++,k--)
	{
		for (j = n-i; j<n; j++)
			printf(" ");
		for (j = 0; j<2*k-1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
