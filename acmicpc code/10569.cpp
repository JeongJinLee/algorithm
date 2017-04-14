#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	while (n--){
		int v, e;
		scanf("%d %d", &v,&e);
		printf("%d\n", 2+e-v);

	}
	return 0;
}