#include <stdio.h>
int arr[1000002];
int arr2[1000002];
int main(void) {
	int a,b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
		scanf("%d", &arr[i]);
	for (int j = 0; j < b; j++)
		scanf("%d", &arr2[j]);
	arr[a] = 2e9;
	arr2[b] = 2e9;
	for (int i = 0, j = 0;i<a||j<b;){
		if (arr[i] < arr2[j]){
			printf("%d ",arr[i++]);
		}
		else if (arr[i] > arr2[j]){
			printf("%d ", arr2[j++]);
		}
		else
			printf("%d ", arr[i++]);
	}
	printf("\n");
	return 0;
}