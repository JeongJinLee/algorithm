#include <stdio.h>
int arr[100000];
int n = 0;
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int check = 0;
	arr[n++] = a;
	int c=a;
	while (true){
		if (check == 1)
			break;
		int temp = (c*a)%b;
		for (int i = 0; i < n; i++){
			if (arr[i] == temp){
				printf("%d\n", n-i);
				check = 1;
				break;
			}
		}
		arr[n++] = temp;
		c = temp;
	}
	return 0;
}