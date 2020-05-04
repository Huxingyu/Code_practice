#include <stdio.h>
#include <stdlib.h>
#define max 10

int num[max];

void zip(int x){
    int a=x;
    while(x!=num[x]){
        x=num[x];
    }
    while(a!=num[a]){
        int temp=a;
        num[temp]=x;        //不服不行啊,见005
        a=num[a];
    }
}

int main(){
    for(int i=0;i<max-1;i++){
        num[i]=i+1;
    }
    num[max-1]=max-1;
    for(int i=0;i<max;i++){
        printf("num[%d]=%d\n",i,num[i]);
    }
    zip(0);
    for(int i=0;i<max;i++){
        printf("num[%d]=%d\n",i,num[i]);
    }
    system("pause");
    return 0;
}