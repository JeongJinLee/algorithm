#include <stdio.h>

int main(void){
	int a;
	scanf("%d", &a);

	if (a % 400 == 0){
		printf("1\n");
		return 0;
	}
	if (a % 4 == 0 && a % 100 == 0){
		printf("0\n");
		return 0;
	}
	if (a % 4 == 0){
		printf("1\n");
		return 0;
	}
	else{
		printf("0\n");
	}

	return 0;
}