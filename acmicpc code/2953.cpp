#include <stdio.h>
int arr[5][5] = { 0, };
int main(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
			arr[i][4] += arr[i][j];
		}
	}
	int max1=0, max2=0;
	for (int i = 0; i < 5; i++) {
		if (max2 < arr[i][4]) {
			max1 = i + 1;
			max2 = arr[i][4];
		}
	}
	printf("%d %d\n", max1,max2);
	return 0;
}