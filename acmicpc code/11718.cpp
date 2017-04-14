#include <stdio.h>

int main(){
    char line[101];
    while(gets(line)&&*line){
        printf("%s\n", line);
    }
}