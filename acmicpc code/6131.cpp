#include <stdio.h>

int main(void)
{
	int n;
	int count=0;
	int i, j;
	scanf("%d", &n);

	for (i = 1; i < 501; i++)
	{
		for (j = 1; j < 501; j++){
			if (j*j==i*i + n)
				count++;
		}
	}

	printf("%d\n", count);
	return 0;
}