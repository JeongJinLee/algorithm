#include <stdio.h>
char arr[100];
int main(void) {
	long long n;
	int cnt = 0;
	scanf("%llu", &n);
	while(n!=0){
	arr[cnt++] = n % 2;
	n = n / 2;	
	}
	for (int i = cnt-1; i >= 0;i--)
		printf("%d", arr[i]);
	return 0;
}