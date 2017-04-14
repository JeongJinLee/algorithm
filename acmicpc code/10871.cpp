#include <stdio.h>
int arr[10001];
int main()
{
	int n, x;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}