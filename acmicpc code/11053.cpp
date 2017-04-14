#include <stdio.h>
int arr[1001] = { 0, };
int d[1001]= {0, };
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
		scanf("%d", &arr[i]);

	d[0] = 1;
	for (int i = 1; i < n; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && d[i]<d[j]+1)
				d[i] = d[j] + 1;
		}
	}
	int max = 0;
	for (int i = 0; i < n; i++)
		max = d[i] > max ? d[i] : max;
	printf("%d\n", max);

	return 0;
}