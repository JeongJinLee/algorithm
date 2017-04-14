#include <stdio.h>
int a[500001];
int main(void) {
	int n;
	n = 5;
	
	int i, j, t;
	int change;
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i <= n; i++) {
		change = 0;
		for (j = 1; j <= n - i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				change = 1;
				for (int k = 1; k <= 5; k++) {
					printf("%d ", a[k]);
				}
				printf("\n");
			}
			
		}
		if (change == 0)
			break;
	}
//	printf("%d\n", i);
	return 0;

}