#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
#define m 2

struct bign{
    int num[max];
    int len;
    bign(){
        memset(num,0,sizeof(0));
        len=0;
    }
};

bign bign_save(char str[]){
    bign x;
    int size=strlen(str);
    for(int i=0;i<size;i++){
        x.num[i]=str[i]-'0';
        x.len++;
    }
    return x;
}

void cmp_bign(char str[m][max]){
    bign x,y;
    x=bign_save(str[0]);
    y=bign_save(str[1]);
    if(x.len>y.len){
        printf("x bigger");
    }
    if(x.len<y.len){
        printf("y bigger");
    }
    if(x.len==y.len){
        for(int i=0;i<x.len;i++){
            if(x.num[i]!=y.num[i]){
                if(x.num[i]>y.num[i]){
                    printf("x bigger");
                }
                else{
                    printf("y bigger");
                }
                break;
            }
        }
    }
}

int main(){
    char str[m][max];
    for(int i=0;i<m;i++){
        gets(str[i]);
    }
    cmp_bign(str);
    system("pause");
    return 0;
}