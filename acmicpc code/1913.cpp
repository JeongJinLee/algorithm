#include <stdio.h>
int arr[1001][1001];
int main(void) {
	int a, b;
	int z;
	scanf("%d", &a);//크기
	scanf("%d", &b);//숫자
	int x = 0, y = 0;
	z = a;
	int k = a*a;
	for (int i = 0; i < a; i++) {
		arr[i][0] = k--;
	}
	x = a-1;
	a--;
	while (true) {
		for (int i = 0; i < a; i++)
			arr[x][++y] = k--;

		for (int i = 0; i < a; i++){
			arr[--x][y]=k--;
		}
		a--;
		if (a == 0)
			break;
		for (int i = 0; i < a; i++) {
			arr[x][--y] = k--;
		}
		for (int i = 0; i < a; i++) {
			arr[++x][y] = k--;
		}
		a--;
		if (a == 0)
			break;
	}

	for (int i = 0; i < z; i++) {

		for (int j = 0; j < z; j++)
		{
			printf("%d ", arr[i][j]);
			if (arr[i][j] == b) {
				x = i + 1; y = j + 1;
			}
		}
		printf("\n");
	}
	printf("%d %d\n", x,y);
	return 0;
}