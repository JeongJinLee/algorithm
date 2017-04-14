#include <stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a,&b);
	int a1=0, a2=0, a3=0, a4=0;
	int temp = a, c = 0;
	while (1){
		int temp2 = temp % 10;
		if (temp2 == 5){
			temp2 = 6;
			
		}
		for (int i = 0; i < c; i++){
			temp2 *= 10;
		}
		c++;
		a1 += temp2;
		temp = temp / 10;
		if (temp == 0)
			break;
	}

	temp = b, c = 0;
	while (1){
		int temp2 = temp % 10;
		if (temp2 == 5){
			temp2 = 6;

		}
		for (int i = 0; i < c; i++){
			temp2 *= 10;
		}
		c++;
		a2 += temp2;
		temp = temp / 10;
		if (temp == 0)
			break;
	}

	temp = a, c = 0;
	while (1){
		int temp2 = temp % 10;
		if (temp2 == 6){
			temp2 = 5;

		}
		for (int i = 0; i < c; i++){
			temp2 *= 10;
		}
		c++;
		a3 += temp2;
		temp = temp / 10;
		if (temp == 0)
			break;
	}
	temp = b, c = 0;
	while (1){
		int temp2 = temp % 10;
		if (temp2 == 6){
			temp2 = 5;

		}
		for (int i = 0; i < c; i++){
			temp2 *= 10;
		}
		c++;
		a4 += temp2;
		temp = temp / 10;
		if (temp == 0)
			break;
	}
	printf("%d %d\n", a3+a4,a1+a2);
	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}