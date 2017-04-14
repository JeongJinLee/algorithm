#include <stdio.h>
int arr[100001];
int main(void) {
	int t;
	scanf("%d", &t);
	int p = 0;
	while (t--){
		int a;
		scanf("%d", &a);
		if (a != 0)
			arr[p++] = a;
		else
			p--;
	}
	int ans = 0;
	for (int i = 0; i < p; i++)
		ans += arr[i];
	printf("%d\n", ans);
	return 0;
}