#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, m;
	int c,b;
	int i,j,k;
	int basket[101];
	int basket2[101];
	int temp, flag = 0;
	scanf("%d %d", &n, &m);

	for (int a = 0; a <= n; a++)
		basket[a] = a;
	for (int a = 0; a < m; a++){
		scanf("%d %d", &i, &j);
		temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;
	}
	printf("%d", basket[1]);
	for (int a = 2; a <= n; a++){
		printf(" %d", basket[a]);
	}
	printf("\n");
	return 0;
}