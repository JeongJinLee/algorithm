#include <stdio.h> 
#include <string.h>
int main() {
	int ans = 0;
	char in[51];
	scanf("%s", in);
	int c = 0;
	if (in[0] == '(')
		c = 1;
	int l = strlen(in);
	ans += 10;
	for (int i = 1; i < l; i++) {
		if (in[i] == in[i - 1])
			ans += 5;
		else
			ans += 10;
	}
	printf("%d\n", ans);
	return 0;
}