#include <stdio.h>

int main(void){
    int n;
    long long ans=1;
    scanf("%d", &n);
    if(n==0)
        ans=1;
    else{
        for(int i=1;i<=n;i++)
            ans*=i;
    }
    printf("%llu\n", ans);
    return 0;
}