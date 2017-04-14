#include <stdio.h>
#include <stdlib.h>

int N[100001], M;

int intcmp(const void *a, const void *b) {
	if (*(int *)a < *(int *)b) {
		return -1;
	}
	else if (*(int *)a == *(int *)b) {
		return 0;
	}
	else {
		return 1;
	}
}
int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
	
		scanf("%d", &N[i]);
		
	}
	qsort(N, n, sizeof(N[0]), intcmp);
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &M);
		
		int *ptr;
		ptr = (int*)bsearch(&M, N, n, sizeof(N[0]), intcmp);
		if (ptr != NULL)
			printf("1\n");
		else
			printf("0\n");
	}

	return 0;
}