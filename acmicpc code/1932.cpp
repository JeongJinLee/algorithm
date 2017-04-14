#include <stdio.h>
int arr[501][501];
int main(void) {
	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = a-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			arr[i - 1][j] = arr[i - 1][j] + (arr[i][j]>arr[i][j + 1] ? arr[i][j] : arr[i][j + 1]);
		}
	}
	printf("%d\n", arr[0][0]);
	return 0;
}