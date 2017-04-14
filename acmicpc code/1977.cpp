#include <stdio.h>
int main(void) {
	int a, b;
	int n[101];
	for (int i = 1; i <= 100; i++){
		n[i] = i*i;
	}
	scanf("%d\n%d", &a,&b);
	int ans = 0;
	int min=-1;
	for (int i = 1; i <= 100; i++){
		if (n[i] < a)
			continue;
		else if (n[i] > b)
			break;
		if (min == -1)
			min = n[i];
		ans += n[i];
	}
	if (ans == 0){
		printf("-1\n");
		return 0;
	}
	printf("%d\n%d\n", ans,min);

	return 0;
}