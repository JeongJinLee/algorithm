#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[9];
int arr2[9];
int main(void) {
	for (int i = 0; i < 8; i++){
		scanf("%d", &arr[i]);
		arr2[i] = arr[i];
	}
	sort(arr2, arr2 + 8);
	int ans = 0;
	ans = arr2[6] + arr2[7] + arr2[5] + arr2[4] + arr2[3];
	int a[5];
	for (int i = 7,k=0; i >= 3; i--,k++){
		for (int j = 0; j < 8; j++){
			if (arr2[i] == arr[j])
				a[k] = j + 1;
		}
	}
	sort(a, a + 5);
	printf("%d\n", ans);
	for (int i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}