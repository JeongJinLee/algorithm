#include <stdio.h>
#include <algorithm>>
using namespace std;
int main(void) {
	int a=0, b=0;
	int c[10], d[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &c[i]);
	for (int i = 0; i < 10; i++)
		scanf("%d", &d[i]);

	sort(c, c + 10);
	sort(d, d + 10);
	printf("%d %d\n", c[7]+c[8]+c[9],d[7]+d[8]+d[9]);
	return 0;
}