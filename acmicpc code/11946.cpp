#include<stdio.h> 
int arr[101][16] = { { 0, }, };
int score[101] = { 0, };//총점수
int s[101] = { 0, };//총 맞은 개수
int main() {
	int n, m, q;
	scanf("%d %d %d", &n, &m, &q);
	for (int i = 0; i < q; i++) {
		int temp1, temp2, temp3;
		char log[10];
		scanf("%d %d %d %s", &temp1, &temp2, &temp3, log);
		if (arr[temp2 + 1][temp3 + 1] == -1)
			continue;//이미 맞은거면 통과
		if (log[0] == 'A') {//맞은경우
			int t = arr[temp2 + 1][temp3 + 1];//카운트
			arr[temp2 + 1][temp3 + 1] = -1;//맞은처리
			score[temp2] += (temp1 + 20 * t);
			s[temp2]++;
		}
		else {
			arr[temp2 + 1][temp3 + 1]++;
		}
	}
	while (true) {
		int max = -1;
		int ptr = -1;
		for (int i = 1; i <= n; i++) {
			if (max < s[i]) {
				ptr = i;
				max = s[i];
			}
			else if (max == s[i] && ptr!=-1){
				if (score[i] < score[ptr]){
					ptr = i;
				}
			}
		}
		if (ptr == -1)
			break;
		else {
			printf("%d %d %d\n", ptr, s[ptr], score[ptr]);
			score[ptr] = -1;
			s[ptr] = -1;
		}
	}
	return 0;
}