#include<stdio.h> 
char arr[11][11];
int main() {
	int n, m;
	char t;
	scanf("%d %d", &n,&m);
	scanf("%c", &t);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &arr[i][j]);
		}
		scanf("%c", &t);
	}
	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}