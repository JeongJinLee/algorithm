#include <stdio.h>

int main(void)
{
	int t;
	int n,i;
	int nn[101];
	int cnt = 0;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &nn[i]);

	scanf("%d", &t);

	for (i = 0; i < n; i++)
		if (nn[i] == t)
			cnt++;

	printf("%d\n", cnt);
	return 0;
}