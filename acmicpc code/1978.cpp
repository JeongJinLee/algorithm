#include <stdio.h>
int a[1001] = { 0,0,1,1, };
int main(void) {
	for (int i = 5; i < 1000; i++) {
		for (int j = 2; j < i; j++) {
			if(a[j]==1){
			if (i % j == 0)
				break;
			
			}
			if (j == i - 1) {
				a[i] = 1;
			}
		}
	}

	int n;
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int b;
		scanf("%d", &b);
		if (a[b] == 1)
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}