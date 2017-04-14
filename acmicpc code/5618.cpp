#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[1000002];
int arr2[1000002];
int main(void) {
	int n;
	int a[3];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);
	if (n == 3){
		int c = 0;
		for (int i = 1; i <= a[0]; i++){
			if (a[0] % i == 0){
				arr[c++] = i;
			}
		}
		int k = 0;
		for (int i = 0; i < c; i++){
			if (a[1] % arr[i] == 0){
				arr2[k++] = arr[i];
			}
		}
		c = 0;
		for (int i = 0; i < k; i++){
			if (a[2] % arr2[i] == 0){
				printf("%d\n", arr2[i]);
			}
		}
	}
	else if (n == 2){
		int c = 0;
		for (int i = 1; i <= a[0]; i++){
			if (a[0] % i == 0){
				arr[c++] = i;
			}
		}
		int k = 0;
		for (int i = 0; i < c; i++){
			if (a[1] % arr[i] == 0){
				printf("%d\n", arr[i]);
			}
		}
	}
	return 0;
}