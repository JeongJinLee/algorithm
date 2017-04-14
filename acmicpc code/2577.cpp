#include <stdio.h>
int main(void) {
	int a, b, c;
	int arr[10] = { 0, };
	int temp;
	scanf("%d %d %d", &a,&b,&c);
	temp = a*b*c;
	while (true) {
		
		arr[temp % 10]++;
		temp = temp / 10;
		if (temp == 0) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}