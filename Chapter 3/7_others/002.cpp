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
    int rightnum=0,ans=0;
    for(int i=x-1;i>=0;i--){
        if(str[i]=='T'){
            rightnum++;
        }
        if(str[i]=='A'){
            ans=ans+rightnum*num[i];
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}

//递推