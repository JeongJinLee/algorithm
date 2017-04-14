#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, m;
	int i,j,k;
	int basket[101];
	int temp;
	scanf("%d %d", &n, &m);

	for (int a = 0; a <= n; a++)
		basket[a] = a;
	for (int a = 0; a < m; a++){
		scanf("%d %d", &i, &j);
		for (int b = i,c=0; b < (i+j)/2+1; b++,c++){
			temp = basket[b];
			basket[b] = basket[j-c];
			basket[j - c] = temp;
		}
	}
	printf("%d", basket[1]);
	for (int a = 2; a <= n; a++){
		printf(" %d", basket[a]);
	}
	printf("\n");
	return 0;
}