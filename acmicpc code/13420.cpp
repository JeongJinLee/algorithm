#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a, b;
		char c;
		char temp;
		long long ans;
		scanf("%lld%c%c%c%lld%c%c%c%lld", &a,&temp,&c,&temp,&b,&temp,&temp,&temp,&ans);
		if (c == '+') {
			if (a + b == ans)
				printf("correct\n");
			else
				printf("wrong answer\n");
		}
		else if (c == '-') {
			if (a - b == ans)
				printf("correct\n");
			else
				printf("wrong answer\n");
		}
		else if (c == '*') {
			if (a * b == ans)
				printf("correct\n");
			else
				printf("wrong answer\n");
		}
		else if (c == '/') {
			if (a / b == ans)
				printf("correct\n");
			else
				printf("wrong answer\n");
		}
	}
	return 0;
}