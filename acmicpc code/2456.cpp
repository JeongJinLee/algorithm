#include <stdio.h>
int arr[3] = { 0, };//각 0,1,2의 점수를 저장하는 배열
int arr2[3][3] = { { 0, }, };//각 0,1,2, 후보의 1,2,3점 카운트
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int a, b, c;
		scanf("%d %d %d", &a,&b,&c);
		arr[0] += a;
		arr[1] += b;
		arr[2] += c;

		arr2[0][a - 1]++;
		arr2[1][b - 1]++;
		arr2[2][c - 1]++;
	}
	if (arr[0]>arr[1] && arr[0] > arr[2]){
		printf("1 %d\n", arr[0]);
	}
	else if (arr[1] > arr[0] && arr[1] > arr[2]){
		printf("2 %d\n", arr[1]);
	}
	else if (arr[2] > arr[0] && arr[2] > arr[1]){
		printf("3 %d\n", arr[2]);
	}
	else if (arr[0] == arr[1] && arr[0] > arr[2]){
		if (arr2[0][2]>arr2[1][2])
			printf("1 %d\n", arr[0]);
		else if (arr2[0][2] < arr2[1][2])
			printf("2 %d\n", arr[1]);
		else if (arr2[0][2] == arr2[1][2]){//3점이 같으면
			if (arr2[0][1]>arr2[1][1])
				printf("1 %d\n", arr[0]);
			else if (arr2[0][1] < arr2[1][1])
				printf("2 %d\n", arr[1]);
			else if (arr2[0][1] == arr2[1][1]){//3점이 같으면
				if (arr2[0][0]>arr2[1][0])
					printf("1 %d\n", arr[0]);
				else if (arr2[0][0] < arr2[1][0])
					printf("2 %d\n", arr[1]);
				else if (arr2[0][0] == arr2[1][0]){//3점이 같으면
					printf("0 %d\n", arr[0]);
				}
			}
		}
	}
	else if (arr[0] == arr[2] && arr[0] > arr[1]){
		if (arr2[0][2]>arr2[2][2])
			printf("1 %d\n", arr[0]);
		else if (arr2[0][2] < arr2[2][2])
			printf("3 %d\n", arr[2]);
		else if (arr2[0][2] == arr2[2][2]){//3점이 같으면
			if (arr2[0][1]>arr2[2][1])
				printf("1 %d\n", arr[0]);
			else if (arr2[0][1] < arr2[2][1])
				printf("3 %d\n", arr[2]);
			else if (arr2[0][1] == arr2[2][1]){//3점이 같으면
				if (arr2[0][0]>arr2[2][0])
					printf("1 %d\n", arr[0]);
				else if (arr2[0][0] < arr2[2][0])
					printf("3 %d\n", arr[2]);
				else if (arr2[0][0] == arr2[2][0]){//3점이 같으면
					printf("0 %d\n", arr[0]);
				}
			}
		}
	}
	else if (arr[2] == arr[1] && arr[1] > arr[0]){
		if (arr2[2][2] > arr2[1][2])
			printf("3 %d\n", arr[2]);
		else if (arr2[2][2] < arr2[1][2])
			printf("2 %d\n", arr[1]);
		else if (arr2[2][2] == arr2[1][2]){//3점이 같으면
			if (arr2[2][1]>arr2[1][1])
				printf("3 %d\n", arr[2]);
			else if (arr2[2][1] < arr2[1][1])
				printf("2 %d\n", arr[1]);
			else if (arr2[2][1] == arr2[1][1]){//3점이 같으면
				if (arr2[2][0]>arr2[1][0])
					printf("3 %d\n", arr[2]);
				else if (arr2[2][0] < arr2[1][0])
					printf("2 %d\n", arr[1]);
				else if (arr2[2][0] == arr2[1][0]){//3점이 같으면
					printf("0 %d\n", arr[2]);
				}
			}
		}
	}
	else
		printf("0 %d\n", arr[0]);
	return 0;
}