#include <stdio.h>
int score[301] = { 0, };
int d[301][3] = { {0,}, };
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &score[i]);
	d[0][0] = 0;
	d[0][1] = 0;
	d[0][2] = 0;
	for (int i = 0; i < n; i++) {
		d[i][0] = d[i - 1][2] > d[i - 1][1] ? d[i - 1][2] : d[i - 1][1];
		d[i][1] = d[i - 1][0] + score[i];
		d[i][2] = d[i - 1][1] + score[i];
	}
	printf("%d\n", d[n-1][1]>d[n-1][2]?d[n-1][1]:d[n-1][2]);
	return 0;
}