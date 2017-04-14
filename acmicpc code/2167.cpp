#include <stdio.h>
int arr[301][301];
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			scanf("%d", &arr[i+1][j+1]);

	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		int ans = 0;
		for (int k = x1; k <= x2; k++) {
			for (int z = y1; z <= y2; z++) {
				ans += arr[k][z];
			}
		}
		printf("%d\n", ans);

	}
	return 0;
}