#include <stdio.h>
int arr[10000];
int main(void) {
	int t;
	scanf("%d", &t);
	while (t--){
		int a;
		int j = 0;
		scanf("%d", &a);
		while (1){
			arr[j++] = a % 2;
			a = a / 2;
			if (a == 0)
				break;
		}
		for (int i = 0; i < j; i++){
			if (arr[i] == 1){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}