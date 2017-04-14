#include <stdio.h>
unsigned long long map[110][110] = { { 0, }, };
unsigned long long map2[110][110] = { { 0, }, };
int main(void) {
	int n,c;
	scanf("%d", &n);
	for (int i = 1; i <= n  ; i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &map[i][j]);
	map[n][n] = 1;
	map2[n][n] = 1;
	c = n;
	for (int i = n; i >= 1; i--){
		for (int j = n ; j >= 1; j--){
			map2[i][j] = map2[i + map[i][j]][j] + map2[i][j + map[i][j]];
			if (j == c)
				map2[i][j] = 1;
			//map2[j][i] = map2[j + map[j][i]][i] + map2[j][i + map[j][i]];
		}
		for (int j = n - 1; j >= 1; j--){
			//map2[i][j] = map2[i + map[i][j]][j] + map2[i][j + map[i][j]];
			map2[j][i] = map2[j + map[j][i]][i] + map2[j][i + map[j][i]];
		}
		
		n--;
	}
	printf("%llu\n", map2[1][1]);
	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}