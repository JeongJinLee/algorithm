#include <stdio.h>
int arr[10000];
int main(void) {
	int n, m;
	int cnt = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		if (n%i == 0)
			arr[++cnt] = i;
		if (cnt == m) {
			printf("%d\n", i);
			break;
		}
	}
	if (m > cnt)
		printf("0\n");
	return 0;
}