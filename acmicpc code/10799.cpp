#include <stdio.h>
#include <string.h>
char arr[100001] = { 0, };
int stack[100001] = { 0, };
int main(void) {
	scanf("%s", arr);
	int len = strlen(arr);
	int sum = 0;
	int check = 0;
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == '(') {
			count++;
			check = 1;
		}
		else if (arr[i] == ')') {
			
			if (check == 1) {//레이저 차례임
				count--;
				for (int j = 0; j < count; j++) {
					stack[j]++;
				}
			}
			else {//막대기끝
				sum += (stack[count-1]+1);
				stack[count-1] = 0;
				count--;
			}
			check = 0;
		}
	}
	printf("%d\n", sum);
	return 0;

}