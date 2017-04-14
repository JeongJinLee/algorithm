#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	int a[10];
	int t;
	scanf("%d", &t);
	while (t--) {
		for (int i = 0; i < 10; i++)
			scanf("%d", &a[i]);
		sort(a, a + 10);
		printf("%d\n", a[7]);
	}
}