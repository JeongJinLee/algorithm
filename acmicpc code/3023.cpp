#include <stdio.h>

int main(void) {
	char arr[101][101];
	int r, c;
	scanf("%d %d", &r,&c);
	fgets(arr[0], c + 1, stdin);
	for (int i = 0; i < r; i++) {
		//fgets(arr[i], c, stdin);
		scanf("%s\n", arr[i]);
	}
	for (int i = 0; i < r; i++) {
		for (int j = c, k = 1; j < c * 2; j++,k++) {
			arr[i][j] = arr[i][c - k];
		}
		arr[i][c * 2] = 0;
	}
	for (int i = r,k=1; i < r * 2; i++,k++) {
		for (int j = 0; j < c * 2; j++)
		{
			arr[i][j] = arr[r - k][j];
		}
		arr[i][c * 2] = 0;
	}
	int a, b;
	scanf("%d %d", &a,&b);
	a--;
	b--;
	if (arr[a][b] == '#')
		arr[a][b] = '.';
	else if (arr[a][b] == '.')
		arr[a][b] = '#';
	else {
		printf("error");
	}
	for (int i = 0; i < r * 2; i++) {
		for (int j = 0; j < c * 2; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}