#include <stdio.h>

int main(void)
{
	int test,ans;
	int h, w, n;
	scanf("%d", &test);
	while (test--){
		scanf("%d %d %d", &h,&w,&n);
		ans = ((n-1)%h+1)*100;
		ans += (n - 1) / h + 1;
		printf("%d\n", ans);
	}

	return 0;
}