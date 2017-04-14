#include <stdio.h> 
int arr[500001];
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
		arr[i] = i;
	int check = 0;
	int cnt = a;
	int k = a;
	int j = 1;
	while (true) {

		if (cnt == 1) {
			printf("%d\n", arr[j]);
			break;
		}
		else {
			if (check == 0) {// 버리기
				j++;
				check = 1;
				cnt--;
			}
			else {
				if (k == a) {
					k = 1;
				}
				else {
					k++;

				}
				arr[k] = arr[j];
				j++;
				check = 0;
			}
			if (j > a)
				j = 1;
		}

	}
	return 0;
}