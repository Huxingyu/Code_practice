#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 26*26*26+10

int num[max]={0};

int hash_change(char x[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum*26+(x[i]-'A');
    }
    return sum;
}

int main(){
    int n,m,num[max]={0};
    char x[max][5];     //error,just got it
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",x[i]);
        int temp = hash_change(x[i],3);
        num[temp]++;
    }
    for(int i=0;i<m;i++){
        scanf("%s",x[i]);
        int temp = hash_change(x[i],3);
        printf("%d\n",num[temp]);
    }
    system("pause");
    return 0;
}