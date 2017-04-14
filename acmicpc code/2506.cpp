#include <stdio.h>
int input[101];
int ans = 0;
int cal(int n){
	return n*(n + 1) / 2;
}
int main(void) {
	
	int n;
	scanf("%d", &n);
	int k = 0;
	for (int i = 0; i < n; i++){
		scanf("%d", &input[i]);
	}
	if (input[0] == 1){
//		ans++;
		k = 1;
	}
	for (int i = 1; i < n; i++){
		if (input[i] == 1){
			k++;
		}
		else{
			ans += cal(k);
			k = 0;
		}
	}
	if (k!=0){
		ans += cal(k);
	}
	printf("%d\n", ans);
	return 0;	
}