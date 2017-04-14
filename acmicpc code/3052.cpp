#include <stdio.h>
int main(void) {
	int arr[10];
	int arr2[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		int check = -1;
		for (int j = 0; j < cnt; j++) {
			if (arr2[j] == arr[i]%42)
			{
				check = 1;
				break;
			}
		}
		if (check == -1) {
			arr2[cnt++] = arr[i]%42;
		}
	}
	printf("%d\n", cnt);
	return 0;
}