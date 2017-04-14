#include <stdio.h>
int main(void) {
	int n, k;
	scanf("%d %d", &n,&k);
	int arr[1001][4];
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
	}
	for (int i = 0; i < n; i++) {
		if (arr[i][0] == k) {
			k = i;
			break;
		}
		
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i][1] > arr[k][1])
			cnt++;
		else if (arr[i][1] == arr[k][1] && arr[i][2] > arr[k][2])
		{
			cnt++;
		}
		else if (arr[i][1] == arr[k][1] && arr[i][2] == arr[k][2] && arr[i][3] > arr[k][3])
			cnt++;
	}
	printf("%d\n", cnt+1);
	return 0;
}