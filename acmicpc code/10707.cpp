#include<stdio.h> 

int main() {
	int a, b, c, d, p;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&p);
	int at = 0, bt = 0;
	at = a*p;
	bt += b;//기본요금
	if (p - c > 0) {
		bt += ((p - c)*d);
	}
	printf("%d\n", (at>bt)?bt:at);
	return 0;
}