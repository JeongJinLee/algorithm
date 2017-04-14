#include <stdio.h>
#include <string.h>
int arr[100001];
int main(void) {
	int n;
	int cnt = 0;
	char string[200];
	scanf("%d", &n);

	while (n--) {
		scanf("%s", &string);
		if (!strcmp(string, "pop")) {
			if (cnt == 0)
				printf("-1\n");
			else {
				printf("%d\n", arr[cnt-1]);
				cnt--;
			}
		}
		else if (!strcmp(string, "size"))
			printf("%d\n", cnt);
		else if (!strcmp(string, "empty")) {
			if (cnt == 0)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (!strcmp(string, "top")) {
			if (cnt == 0)
				printf("-1\n");
			else
				printf("%d\n", arr[cnt-1]);
		}
		else {
			int number;
			scanf("%d", &number);
			arr[cnt++] = number;
		}
	}
	return 0;
}