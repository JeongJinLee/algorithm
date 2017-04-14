#include <stdio.h>
int a[100001];
int main(void) {
	while (1)
	{
		int n;
		scanf("%d", &n);
		if (n == -1)
			break;
		int j = 0;
		int k = 0;
		for (int i = 1; i < n; i++){
			if (n%i == 0)
			{
				a[j++] = i;
				k += i;
			}
		}
		if (n!=k)
			printf("%d is NOT perfect.", n);
		else{
			printf("%d = ", n);
			for (int i = 0; i < j; i++){
				printf("%d", a[i]);
				if (j - i > 1)
					printf(" + ");
			}
		}
		printf("\n");
	}
	return 0;
}