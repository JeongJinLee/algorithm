#include <stdio.h>
int arr[1001] = { 0, };
int d[1001]= {0, };
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
		scanf("%d", &arr[i]);

	
	for (int i = 0; i < n; i++) {
		d[i] = arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && d[i]<d[j]+arr[i])
				d[i] = d[j] + arr[i];
		}
	}
	int max = 0;
	for (int i = 0; i < n; i++)
		max = d[i] > max ? d[i] : max;
	printf("%d\n", max);

	return 0;
}