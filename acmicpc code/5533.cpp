#include <stdio.h> 
int main()
{
	int n;
	scanf("%d", &n);
	int arr[201][3] = { { 0, }, };
	int arr2[101][3]= { { 0, }, };
	int ans[201] = { 0, };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
			arr2[arr[i][j]][j]++;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr2[arr[i][j]][j] == 1) {//나혼자만 이 숫자를 적은 경우에 ++
				ans[i] += arr[i][j];
			}
		}
		printf("%d\n", ans[i]);
	}
	
	return 0;
}