#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

int main(){
    char str[max];
    int num[max]={0};
    gets(str);
    int x=strlen(str);
    for(int i=0;i<x;i++){
        if(i>0){
            num[i]=num[i-1];
        }
        if(str[i]=='P'){
            num[i]++;
        }
    }
    for(int i=0;i<x;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}