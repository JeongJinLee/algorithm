#include <stdio.h>
int arr[1001] = { 0, };
int main(void) {
	int a[10];
	int hap=0;
	int p, c;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		hap += a[i];
		arr[a[i]]++;
	}
	p = hap / 10;
	int max = 0;
	for (int i = 10; i <= 1000; i = i + 10) {
		if (arr[i] > max) {
			max = arr[i];
			c = i;
		}
	}
	printf("%d\n%d\n", p,c);
	return 0;
}