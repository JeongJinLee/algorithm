#include <stdio.h>
#include <algorithm>
using namespace std;
int a[10] = { 0, };
int main(void) {
	int hap=0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		hap += a[i];
	}
	hap = hap - 100;
	sort(a, a + 9);
	int c=-1, d=-1;
	for (int i = 0; i < 8; i++) {
		if (c != -1 && d != -1)
			break;
		for (int j = i + 1; j < 9; j++) {
			if (a[i] + a[j] == hap) {
				c = i;
				d = j;
				break;

			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i != c && i != d)
			printf("%d\n", a[i]);
	}
	return 0;
}