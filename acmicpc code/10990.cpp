#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n-i; j > 1; j--) {
			printf(" ");
		}
		printf("*");
		for (int j = i * 2 - 1; j > 0; j--) {
			printf(" ");
		}
		if (i != 0)
			printf("*\n");
		else
			printf("\n");
	}
	return 0;
}