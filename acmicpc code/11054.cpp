#include <stdio.h>
int arr[1001] = { 0, };
int d[1001] = { 0, };
int d2[1001] = { 0, };
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && d[i]<d[j] + 1)
				d[i] = d[j] + 1;
		}
	}
	for (int i = n-1; i >= 0; i--) {
		d2[i] = 1;
		for (int j = n-1; j > i; j--) {
			if (arr[j] < arr[i] && d2[i] < d2[j] + 1)
				d2[i] = d2[j] + 1;
		}
	}
	for (int i = 0; i < n; i++)
		d[i] = d[i] + d2[i]-1;
	int max = 0;
	for (int i = 0; i < n; i++)
		max = d[i] > max ? d[i] : max;
	printf("%d\n", max);

	return 0;
}