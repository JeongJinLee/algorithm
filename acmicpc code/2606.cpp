#include <stdio.h>
int com[101] = { 0,1,0, };
int num[10000][2];
int main(void) {
	int n;
	scanf("%d", &n);
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t;i++) {
		scanf("%d %d", &num[i][0],&num[i][1]);
	}
	int flag = 0;
	while (!flag) {
		flag = 1;
		for (int i = 0; i < t; i++) {
			if (com[num[i][0]] == 1 && com[num[i][1]] == 0) {
				flag = 0;
				com[num[i][1]] = 1;
			}
			if (com[num[i][1]] == 1 && com[num[i][0]] == 0) {
				flag = 0;
				com[num[i][0]] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (com[i] == 1) cnt++;
	printf("%d\n", cnt-1);
	return 0;
}