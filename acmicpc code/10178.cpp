#include <stdio.h>
#include <algorithm>>
using namespace std;
int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", a/b, a%b);
	}
	return 0;
}