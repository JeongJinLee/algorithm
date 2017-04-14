#include <stdio.h>
char map[201][201]={{0,},};
int ans=0;
int n,m;
void check(int x, int y){
    if(x<0 || y<0 || n>2*n ||m>2*m)
        return;
    if(x-1>=0 && map[x-1][y]=='.'){//위
        map[x-1][y]='-';
        map[x-2][y]='O';//블럭 깨줌
        check(x-2,y);
    }
    if(map[x+1][y]=='.'){//아래
        map[x+1][y]='-';
        map[x+2][y]='O';
        check(x+2,y);
    }
    if(y-1>=0 && map[x][y-1]=='.'){//왼쪽
        map[x][y-1]='-';
        map[x][y-2]='O';
        check(x,y-2);
    }
    if(map[x][y+1]=='.'){//오른쪽
        map[x][y+1]='-';
        map[x][y+2]='O';
        check(x,y+2);
    }
}
int main(void){
     
    double k;
    scanf("%d %d %lf", &n, &m, &k);
    for(int i=0;i<=2*m;i++){
        scanf("%s", map[i]);
    }
    int x=2*m,y=2*k,s=0,l=0;//s==0 올라가는방향,s==1내려가는방향, l==0 왼쪽,l==1 오른쪽 방향
    if(k==0)
        l=1;
    if(y%2==0){
        while(true){//k=0일때 고려해야함
            if(s==0 && l==0){//왼쪽 위
                x--;
                y--;
            }
            else if(s==0&&l==1){//오른쪽 위
                x--;
                y++;
            }
            else if(s==1&& l==0){//왼쪽 아래
                x++;
                y--;
             
            }
            else if(s==1&&l==1){//오른쪽 아래
                x++;
                y++;
            }
            if(map[x][y]=='B'){
                ans++;
                map[x][y]='O';
                check(x,y);
            }
            if(x==2*m)
                break;
            if(y==0){
                l=1;
            }
            if(y==2*n){
                l=0;
            }
            if(x==0){
                s=1;
            }
        }
    }else{
        while(true){//k=0일때 고려해야함
            if(s==0 && l==0){//왼쪽 위
                x--;
                y--;
                if(x%2==1){
                    if(map[x][y+1]=='B'){
                        ans++;
                        map[x][y+1]='O';
                        check(x,y+1);
                    }
                }
                else if(x%2==0){
                if(map[x+1][y]=='B'){
                        ans++;
                        map[x+1][y]='O';
                        check(x+1,y);
                    }
                }
            }
            else if(s==0&&l==1){//오른쪽 위
                x--;
                y++;
                if(x%2==1){
                    if(map[x][y-1]=='B'){
                        ans++;
                        map[x][y-1]='O';
                        check(x,y-1);
                    }
                }else if(x%2==0){
                    if(map[x+1][y]=='B'){
                        ans++;
                        map[x+1][y]='O';
                        check(x+1,y);
                    }
                }
            }
            else if(s==1&& l==0){//왼쪽 아래
                x++;
                y--;
                if(x%2==1){
                    if(map[x][y+1]=='B'){
                        ans++;
                        map[x][y+1]='O';
                        check(x,y+1);
                    }
                }
                else if(x%2==0){
                if(map[x-1][y]=='B'){
                        ans++;
                        map[x-1][y]='O';
                        check(x-1,y);
                    }
                }
            }
            else if(s==1&&l==1){//오른쪽 아래
                x++;
                y++;
                if(x%2==1){
                    if(map[x][y-1]=='B'){
                        ans++;
                        map[x][y-1]='O';
                        check(x,y-1);
                    }
                }
                else if(x%2==0){
                if(map[x-1][y]=='B'){
                        ans++;
                        map[x-1][y]='O';
                        check(x-1,y);
                    }
                }
            }
             
            if(x==2*m)
                break;
            if(y==0){
                l=1;
            }
            if(y==2*n){
                l=0;
            }
            if(x==0){
                s=1;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}