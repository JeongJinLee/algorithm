#include<stdio.h>
int arr[101];

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n,cnt=0;
		scanf("%d", &n);
		for (int i = 0; i <= n; i++) {
			arr[i] = 0;//닫힘
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j % i == 0) {
					if (arr[j] == 0) {
						arr[j] = 1;
						cnt++;
					}
					else {
						arr[j] = 0;
						cnt--;
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}