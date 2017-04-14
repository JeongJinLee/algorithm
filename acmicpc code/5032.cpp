#include<stdio.h> 
int main() {
	int a, b, c;
	scanf("%d %d %d", &a,&b,&c);
	int cnt = 0;
	int temp = 0;//바꾼 개수
	int temp2 = a + b;
	while (true){
		
		temp = temp2 / c;
		if (temp == 0)
			break;
		cnt += temp;
		temp2 = temp2%c + temp;

	}
	printf("%d\n", cnt);
	return 0;
}