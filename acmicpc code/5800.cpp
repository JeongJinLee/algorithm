#include<stdio.h>
#include <algorithm>

using namespace std;



int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t;i++) {
		int k;
		int max = -1, min = 101;
		scanf("%d", &k);
		int* arr = (int*)malloc(sizeof(int)*k);
		for (int j = 0; j < k; j++) {
			scanf("%d", &arr[j]);
			if (max < arr[j])
				max = arr[j];
			if (min > arr[j])
				min = arr[j];
		}
		sort(arr, arr+k);
		int gap = 0;
		for (int j = 1; j < k; j++) {
			if (arr[j] - arr[j - 1]>gap) {
				gap = arr[j] - arr[j - 1];
			}
				
		}
		printf("Class %d\n", i);
		printf("Max %d, Min %d, Largest gap %d\n", max,min,gap);
		free(arr);
	}
	return 0;
}