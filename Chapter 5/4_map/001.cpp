//重写一下4.2散列hash的有关代码
//map和hash应该联系挺大的

#include <stdio.h>
#include <stdlib.h>
#define max 26*26*26
#define limit 10

int num[max]={0};

int hash_function(char str[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum*26+(str[i]-'A');
    }
    return sum;
}

int main(){
    int n,m;
    char str[limit][5];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
        int id=hash_function(str[i],3);
        num[id]++;
    }
    for(int i=0;i<m;i++){
        scanf("%s",str[i]);
        int id=hash_function(str[i],3);
        printf("%d ",num[id]);
    }
    system("pause");
    return 0;
}