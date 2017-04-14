#include <stdio.h>
int arr[21];
int main(void) {
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		int min = 2e9;
		int max = -1;
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
			if (arr[i] < min)
				min = arr[i];
			if (arr[i] > max)
				max = arr[i];
		}
		int ans = 0;
		int av = (min + max) / 2;
		ans = (av - min) * 2 + (max - av) * 2;
		printf("%d\n", ans);
	}
	return 0;
}