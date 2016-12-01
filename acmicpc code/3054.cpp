#include <stdio.h>
#include <string.h>
int main() {
	char arr[16];
	scanf("%s", arr);
	int len = strlen(arr);
	int cnt = 1;
	for (int j = 1; j <= 1 + len * 4; j++) {
		if (j % 12 == 11) {
			printf("*");
			cnt = 0;
		}
		else {
			if (cnt != 3) {
				printf(".");
				cnt++;
			}
			else
			{
				printf("#");
				cnt = 0;
			}
		}
	}
	printf("\n");
	int cnt1 = 0;
	int cnt2 = 0;
	for (int j = 1; j <= 1 + len * 4; j++) {
		if (j % 2 == 1)
			printf(".");
		else {
			if (cnt1 != 4) {
				printf("#");
				cnt1++;
			}
			else {
				if (cnt2 == 0) {
					printf("*");
					cnt2++;
				}
				else {
					printf("*");
					cnt2 = 0;
					cnt1 = 0;
				}
			}
		}
	}
	printf("\n");
	cnt = 3;
	int k = 0;
	int check = 0;
	for (int j = 1; j <= 1 + len * 4; j++) {
		if (j % 2 == 0) {
			printf(".");
			cnt++;
		}
 
		else {
			if (cnt==3) {
				if (check == 1){
					printf("*");
					check = 2;
				}
				else if (check == 2) {
					printf("*");
					check = 0;
				}
				else 
					printf("#");
				cnt = 0;
			}
			else {
				printf("%c", arr[k++]);
				cnt++;
				if (k % 3 == 2 && len - k >= 1) {
					check = 1;
				}
			}
		}
	}
	printf("\n");
	cnt1 = 0;
	cnt2 = 0;
	for (int j = 1; j <= 1 + len * 4; j++) {
		if (j % 2 == 1)
			printf(".");
		else {
			if (cnt1 != 4) {
				printf("#");
				cnt1++;
			}
			else {
				if (cnt2 == 0) {
					printf("*");
					cnt2++;
				}
				else {
					printf("*");
					cnt2 = 0;
					cnt1 = 0;
				}
			}
		}
	}
	printf("\n");
	cnt = 1;
	for (int j = 1; j <= 1 + len * 4; j++) {
		if (j % 12 == 11) {
			printf("*");
			cnt = 0;
		}
		else {
			if (cnt != 3) {
				printf(".");
				cnt++;
			}
			else
			{
				printf("#");
				cnt = 0;
			}
		}
	}
	printf("\n");
}