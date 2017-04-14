#include <stdio.h>
#include <string.h>
char arr[51];
int ans[3] = { 1, 0, 0 };
void swap(int a, int b){
	int temp = ans[a];
	ans[a] = ans[b];
	ans[b] = temp;
}
int main(void) {
	
	scanf("%s", arr);
	int l = strlen(arr);
	
	for (int i = 0; i < l; i++){
		if (arr[i] == 'A'){
			swap(0, 1);
		}
		else if (arr[i] == 'B'){
			swap(1,2);
		}
		else if (arr[i] == 'C'){
			swap(2,0);
		}
	}
	int d;
	if (ans[0] == 1)
		d = 1;
	else if (ans[1] == 1)
		d = 2;
	else if (ans[2] == 1)
		d = 3;
	printf("%d\n", d);
	return 0;
}