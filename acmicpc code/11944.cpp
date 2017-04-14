#include<stdio.h> 
int arr[10000];
int arr2[10];
int main() {
    int n, m;
    scanf("%d %d",&n,&m );
    int temp = n;
    int cnt = 0;
    while (1) {
        arr2[cnt] = temp % 10;
        temp = temp / 10;
        cnt++;
 
        if (temp == 0)
            break;
    }
    int ptr = 0;
    for (int i = 0; i < n; i=i+1) {
        for (int j = cnt-1; j>=0; j--) {
            arr[ptr++] = arr2[j];
        }
    }
	int k = cnt*n;
    for (int i = 0; i < ((m>k)?k:m); i++) {
        printf("%d", arr[i]);
    }
    return 0;
}