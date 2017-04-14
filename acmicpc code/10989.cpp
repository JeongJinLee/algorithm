#include <stdio.h>

int a[10001] = { 0, };
int main(void) {
	int n;
	int t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	
		scanf("%d", &t);
		a[t]++;
	}

	for (int i = 1; i < 10001; i++) {
		while (a[i] != 0)
		{
			a[i]--;
			printf("%d\n", i);
			if (a[i] == 0)
				break;
		}
	}
	return 0;
}