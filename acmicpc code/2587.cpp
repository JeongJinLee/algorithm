#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	int a[5];
	int hap=0;
	int p, c;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		hap += a[i];
	}
	sort(a, a+5);
	p = hap / 5;

	printf("%d\n%d\n", p,a[2]);
	return 0;
}