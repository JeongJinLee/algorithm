#include <stdio.h>
#include <math.h>
int arr[10001] = { 2,3, };
int main(void)
{
	int a, b;
	int cnt = 2;
	scanf("%d %d", &a, &b);
	for (int i = 4; i < 10000; i++) {
		for (int j = 0; j < cnt; j++) {
			if (i%arr[j] == 0) {
				break;
			}
			if (j == cnt - 1) {
				arr[cnt++] = i;
			}
		}
	}
	int min=-1, hap=0;
	for (int i = 0; i < cnt; i++) {
		if (arr[i] < a)
			continue;
		else if (arr[i] >= a && arr[i] <= b) {
			if (min == -1)
				min = arr[i];

			hap += arr[i];
		}
		else
			break;
	}
	if (hap == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", hap,min);

	
	return 0;
}
