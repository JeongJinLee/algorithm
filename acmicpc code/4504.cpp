#include<stdio.h>
int arr[200001];

int main(void)
{
	int n;
	int d;
	scanf("%d", &n);
	while (true) {
		scanf("%d", &d);
		if (d == 0)
			break;
		else {
			if (d%n == 0)
				printf("%d is a multiple of %d.\n", d, n);
			else
				printf("%d is NOT a multiple of %d.\n", d,n);
		}
	}

	return 0;
}