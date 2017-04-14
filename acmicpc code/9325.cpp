#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);

	while (t--){
		int s;
		scanf("%d", &s);
		int n;
		scanf("%d", &n);
		int ans = 0;
		int q, p;
		for (int i = 0; i < n; i++){
			scanf("%d %d", &q, &p);
			ans = ans + p*q;
		}
		printf("%d\n", ans+s);
	}
	return 0;
}