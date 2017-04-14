#include <stdio.h> 
int main()
{
	int n;
	scanf("%d", &n);
	int arr[101] = { 0, };
	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);
	int hap = arr[0];
	for (int i = 1; i <= n; i++) {
		int ans = (arr[i] * i) - hap;
		hap += ans;
		printf("%d ", ans);
		
	}
	printf("\n");
	return 0;
}