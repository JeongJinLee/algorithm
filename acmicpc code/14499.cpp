#include <stdio.h>
int map[21][21] = { {0,}, };
int number[6] = { 0, };// 0위 1앞 2아래 3뒤 4오른쪽 5왼쪽
int main(void) {
	int n, m, x, y, k;
	scanf("%d%d%d%d%d", &n,&m,&x,&y,&k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	while (k--) {
		int temp;
		scanf("%d", &temp);
		if (temp == 1) {
			y++;
			if (y >= m) {
				y--;
				continue;
			}
			int temp = number[2];
			number[2] = number[4];
			number[4] = number[0];
			number[0] = number[5];
			number[5] = temp;
		}
		else if (temp == 2) {
			y--;
			if (y < 0){
				y++;
				continue;
			}
			int temp = number[2];
			number[2] = number[5];
			number[5] = number[0];
			number[0] = number[4];
			number[4] = temp;
		}
		else if (temp == 3) {
			x--;
			if (x < 0 ) {
				x++;
				continue;
			}
			int temp = number[1];
			number[1] = number[2];
			number[2] = number[3];
			number[3] = number[0];
			number[0] = temp;
		}
		else if (temp == 4) {
			x++;
			if (x >= n) {
				x--;
				continue;
			}
			int temp = number[1];
			number[1] = number[0];
			number[0] = number[3];
			number[3] = number[2];
			number[2] = temp;
		}


		if (map[x][y] == 0) {
			map[x][y] = number[2];
		}
		else {
			number[2] = map[x][y];
			map[x][y] = 0;
		}
		printf("%d\n", number[0]);
	}
	return 0;
}