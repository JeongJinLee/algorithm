#include <stdio.h> 
#include <queue>

using namespace std;
int map[1001][1001];
queue< pair<int,int> > q[2];
int cnt = 0;
int ans = 0;
int main() {
	int n, m;
	scanf("%d %d", &m,&n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				q[0].push(make_pair(i,j));
				cnt++;
			}
			else if (map[i][j] == -1) {
				cnt++;
			}
		}
	}
	int total = n*m;
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
			pair<int, int> p = q[c].front();
			q[c].pop();
			int x = p.first, y = p.second;
			if (x - 1 >= 0) {
				if (map[x - 1][y] == 0) {
					map[x - 1][y] = 1;
					q[!c].push(make_pair(x - 1, y));
					check = 1;
					cnt++;
				}
			}
			if (y + 1 < m) {
				if (map[x][y+1] == 0) {
					map[x][y+1] = 1;
					q[!c].push(make_pair(x, y+1));
					check = 1;
					cnt++;
				}
			}
			if (x + 1 < n) {
				if (map[x + 1][y] == 0) {
					map[x + 1][y] = 1;
					q[!c].push(make_pair(x + 1, y));
					check = 1;
					cnt++;
				}
			}
			if (y - 1 >= 0) {
				if (map[x][y-1] == 0) {
					map[x][y-1] = 1;
					q[!c].push(make_pair(x, y-1));
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