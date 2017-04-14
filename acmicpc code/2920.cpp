#include <stdio.h>

int main(void) {
	int a[9];
	int d[9] = { 0,8,7,6,5,4,3,2,1 };
	int as[9] = { 0,1,2,3,4,5,6,7,8 };
	for (int i = 1; i < 9; i++) scanf("%d", &a[i]);
	int check = -1;
	for (int i = 1; i < 9; i++) {
		if (as[i] == a[i]) {
			check = 1;
		}
		else {
			check = -1;
			break;
		}
	}
	if (check == -1) {
		for (int i = 1; i < 9; i++) {
			if (d[i] == a[i]) {
				check = 2;
			}
			else {
				check = -1;
				break;
			}
		}
	}
	if (check == 1) {
		printf("ascending\n");
	}
	else if (check == 2)
		printf("descending\n");
	else
		printf("mixed\n");

	return 0;
}