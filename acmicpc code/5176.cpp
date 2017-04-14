#include <stdio.h>
int main(void) {
	int t;
	scanf("%d", &t);
	while (t--){
		int p, m;
		int arr[501] = { 0, };
		scanf("%d %d", &p, &m);
		for (int i = 0; i < p; i++){
			int k;
			scanf("%d", &k);
			arr[k]++;
		}
		int ans = 0;
		for (int i = 1; i <= m; i++){
			if (arr[i] != 0)
				ans++;
		}
		printf("%d\n", p-ans);
	}
	return 0;
}