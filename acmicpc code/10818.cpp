#include <stdio.h>
#include <string.h>
int main(void)
{
	int min=999999999,max=-999999999,n;
	int t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &t);
		if (min > t)
			min = t;
		if (max < t)
			max = t;
	}
	printf("%d %d\n", min, max);

	
	return 0;
}