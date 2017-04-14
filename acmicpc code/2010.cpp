#include <stdio.h>
int ans = 0;
int main(void) {
	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int k;
		scanf("%d", &k);
		ans += k;
	}
	ans = ans - n + 1;
	printf("%d\n", ans);
	return 0;	
}