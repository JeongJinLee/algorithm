#include <stdio.h>
#include <math.h>
int arr[500000] = { 2, 3, 5, 7, };
int n = 4;
int main(void) {
	int a, b;
	scanf("%d %d", &a,&b);
	for (int i = 11; i < 1000000; i++){
		for (int j = 0; j < n; j++){
			if (i%arr[j] == 0)
				break;
			
			if (j == n - 1 || arr[j]*arr[j]>i){
				arr[n++] = i;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++){
		if (arr[i] >= a && arr[i] <= b)
			printf("%d\n", arr[i]);
		if (arr[i]>b)
			break;
	}
	return 0;
}