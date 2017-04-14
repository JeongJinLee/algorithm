#include<stdio.h> 
int main() {
	int n;
	scanf("%d", &n);
	int k = 3;
	for (int i = 2; i <= n; i++) {
		k = k + (i + 1);
	}
	printf("%d\n", k*n);
	return 0;
}