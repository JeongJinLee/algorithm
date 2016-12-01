#include <stdio.h>

int main(void) {
	int arr[101][101] = { {0,}, };
	int n;
	scanf("%d", &n);
	while (n--) {
		int a, b;
		scanf("%d %d", &a, &b);
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++) {
				arr[a + i][b + j] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++) {
			if (arr[i][j] == 1)
				cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}