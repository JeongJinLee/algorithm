#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	
	int a, b;
	scanf("%d %d", &a,&b);
	b = b - 45;
	if (b < 0) {
		a = a - 1;
		if (a < 0) {
			a = 23;
		}
		b = b + 60;
	}

	printf("%d %d\n", a,b);
			return 0;
}