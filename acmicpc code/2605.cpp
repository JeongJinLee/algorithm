#include <stdio.h>
int arr[101];
int ans[101];
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			ans[i] = i+1;
		}
		else {
			for (int j = i; j > i-arr[i]; j--) {
				ans[j] = ans[j-1];
			}
			ans[i - arr[i]] = i+1;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ", ans[i]);
	printf("\n");
	return 0;
}