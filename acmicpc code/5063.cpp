#include <stdio.h>
int main(void) {
	int n;
	int r,e,c;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d", &r,&e,&c);
		if((e-c)>r)
			printf("advertise\n");
		else if (r > (e - c))
			printf("do not advertise\n");
		else if (r == (e - c))
			printf("does not matter\n");
	}
	return 0;
}