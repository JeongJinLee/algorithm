#include <stdio.h> 
int game[101][101] = { {0,}, };
int main()
{
	int n;
	scanf("%d", &n);
	int m;
	scanf("%d", &m);
	int s[101] = { 0, };
	int ans[101] = { 0, };
	for (int i = 0; i < m; i++)
		scanf("%d", &ans[i]);
	
	for (int i = 0; i < m; i++) {//m회 데이터
		int cor = 0;

		for (int j = 1; j <= n; j++) {//한명씩 받음
			int temp;
			scanf("%d", &temp);
			if (temp == ans[i]) {//맞은 경우
				s[j]++;//맞은애 카운트
				cor++;
			}
		}
		s[ans[i]] = s[ans[i]] + (n - cor);
	}
	for (int i = 1; i <= n; i++) {
		printf("%d\n", s[i]);
	}
	return 0;
}