#include <stdio.h>

int main(void){
	int n;
	int i, j;
	scanf("%d", &n);

	for (i = 0; i<n; i++){
		for (j = 0; j <= i; j++)
			printf("*");
		for (j = i; j<n-1; j++)
			printf(" ");
		for (j = i; j<n-1; j++)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("*");
		
		printf("\n");

	}
	for (i = 0; i<n-1; i++){
		for (j = i; j <n-1; j++)
			printf("*");
		for (j = n-i; j<=n; j++)
			printf(" ");
		for (j = n-i; j<=n; j++)
			printf(" ");
		for (j = i; j <n-1; j++)
			printf("*");

		printf("\n");

	}
	return 0;
}
