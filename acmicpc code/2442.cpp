#include <stdio.h>

int main(void){
	int n, i, j,k;

	scanf("%d", &n);
	for (i = n - 1,k=1; i >= 0; i--,k++)
	{
		for (j = i; j>0; j--)
			printf(" ");
		for (j = 0; j<2*k-1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}