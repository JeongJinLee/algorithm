#include <stdio.h>

int main(void){
	int n, i, j, k;

	scanf("%d", &n);
	for (i = 0, k = n; i <n-1; i++, k--)
	{
		for (j = n - i; j<n; j++)
			printf(" ");
		for (j = 0; j<2 * k - 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = n-1, k = 1; i >=0; i--, k++)
	{
		for (j = i; j>0; j--)
			printf(" ");
		for (j = 0; j<2 * k - 1; j++)
			printf("*");
		printf("\n");
	}

	
	return 0;
}
