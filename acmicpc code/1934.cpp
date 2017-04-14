#include <stdio.h>
int arr1[45001] = { 0, }, arr2[45001] = { 0, };
int main(void) {
	
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int a, b;
		int max = 1;
		scanf("%d %d", &a, &b);
		for (int i = 1; i <= a; i++) {
			if (a%i == 0)
				arr1[i] = 1;

		}
		for (int i = 1; i <= b; i++) {
			if (b%i == 0)
				arr2[i] = 1;
		}
		int k = (a <= b) ? a : b;
		for (int i = 1; i <=k ; i++) {
			if (arr1[i] == arr2[i]&& arr2[i] == 1)
				max = i;
		}
		int n, m;
		n = a / max;
		m = b / max;
		printf("%d\n", max*n*m);
		for (int i = 1; i <= a; i++)
			arr1[i] = 0;
		for (int i = 1; i <= b; i++)
			arr2[i] = 0;
	}
	
	return 0;
}