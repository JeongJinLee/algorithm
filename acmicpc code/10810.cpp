#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, m;
	int i,j,k;
	int basket[101] = { 0, };
	scanf("%d %d", &n, &m);

	for (int a = 0; a < m; a++){
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i; b <= j; b++){
			basket[b] = k;
		}
	}
	printf("%d", basket[1]);
	for (int a = 2; a <= n; a++){
		printf(" %d", basket[a]);
	}
	printf("\n");
	return 0;
}