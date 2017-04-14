#include <stdio.h>
#include <string.h>
int arr[100001];
int main(void) {
	int n;
	int cnt = 0;
	int fr = 0;
	char string[200];
	scanf("%d", &n);

	while (n--) {
		scanf("%s", &string);
		if (!strcmp(string, "pop")) {
			if (cnt == fr)
				printf("-1\n");
			else {
				printf("%d\n", arr[fr]);
				fr++;
			}
		}
		else if (!strcmp(string, "size"))
			printf("%d\n", cnt-fr);
		else if (!strcmp(string, "empty")) {
			if (cnt - fr == 0)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (!strcmp(string, "front")) {
			if (cnt - fr == 0)
				printf("-1\n");
			else
				printf("%d\n", arr[fr]);
		}
		else if (!strcmp(string, "back")) {
			if (cnt - fr == 0)
				printf("-1\n");
			else
				printf("%d\n", arr[cnt - 1]);
		}
		else {
			int number;
			scanf("%d", &number);
			arr[cnt++] = number;
		}
	}
	return 0;
}