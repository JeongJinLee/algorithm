#include <stdio.h> 
#include <queue>
#include <tuple>
using namespace std;
int map[101][101][101];
queue< tuple<int, int, int> > q[2];
int cnt = 0;
int ans = 0;
int main() {
	int n, m, h;
	scanf("%d %d %d", &m, &n, &h);
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%d", &map[i][j][k]);
				if (map[i][j][k] == 1) {
					q[0].push(make_tuple(i, j, k));
					cnt++;
				}
				else if (map[i][j][k] == -1) {
					cnt++;
				}
			}
		}
	}
	int total = n*m*h;
	if (total == cnt) {//다바뀐것이니 일 수 출력
		printf("0\n");
		return 0;
	}
	int check = 1;//바뀐게 하나라도 있으면 1 없으면 0
	int c = 0;
	while (1) {
		if (check == 0) //바뀐게 없는 경우
			break;
		check = 0;
		if (total == cnt)//전부다 바뀐 경우
			break;
		ans++;

		while (!q[c].empty()) {
			tuple<int, int, int> p = q[c].front();
			q[c].pop();
			int x = get<0>(p), y = get<1>(p), z = get<2>(p);
			if (x - 1 >= 0) {
				if (map[x - 1][y][z] == 0) {
					map[x - 1][y][z] = 1;
					q[!c].push(make_tuple(x - 1, y, z));
					check = 1;
					cnt++;
				}
			}
			if (y + 1 < m) {
				if (map[x][y + 1][z] == 0) {
					map[x][y + 1][z] = 1;
					q[!c].push(make_tuple(x, y + 1, z));
					check = 1;
					cnt++;
				}
			}
			if (x + 1 < n) {
				if (map[x + 1][y][z] == 0) {
					map[x + 1][y][z] = 1;
					q[!c].push(make_tuple(x + 1, y, z));
					check = 1;
					cnt++;
				}
			}
			if (y - 1 >= 0) {
				if (map[x][y - 1][z] == 0) {
					map[x][y - 1][z] = 1;
					q[!c].push(make_tuple(x, y - 1, z));
					check = 1;
					cnt++;
				}
			}
			if (z + 1 < h) {
				if (map[x][y][z + 1] == 0) {
					map[x][y][z + 1] = 1;
					q[!c].push(make_tuple(x, y, z + 1));
					check = 1;
					cnt++;
				}
			}
			if (z - 1 >= 0) {
				if (map[x][y][z - 1] == 0) {
					map[x][y][z - 1] = 1;
					q[!c].push(make_tuple(x, y, z - 1));
					check = 1;
					cnt++;
				}
			}
		}
		c = !c;

	}
	if (total == cnt) {//다바뀐것이니 일 수 출력
		printf("%d\n", ans);
	}
	else
		printf("-1\n");
	return 0;
}