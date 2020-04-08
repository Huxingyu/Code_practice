#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000

struct bign{
    int d[max];
    int len;
};

void big_change(char num[]){
    bign x;
    int size=strlen(num);
    for(int i=0;i<size;i++){
        x.d[i]=num[i]-'0';      //这儿有问题
        x.len++;
    }
    printf("%d\n",x.len);
    for(int i=0;i<size;i++){
        printf("%d",x.d[i]);
    }
}

int main(){
    char num[max];
    gets(num);
    big_change(num);
    system("pause");
    return 0;
}