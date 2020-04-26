#include <stdio.h>
#include <stdlib.h>
#define max 10

int n,m,max_value=0,value[max],weight[max];

void DFS(int index,int sum_weight,int sum_value){
    if(index==n){
        return;
    }
    DFS(index+1,sum_weight,sum_value);
    if(sum_weight+weight[index]<=m){
        if(sum_value+value[index]>max_value){
            max_value=sum_value+value[index];
        }
        DFS(index+1,sum_weight+weight[index],sum_value+value[index]);
    }
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&value[i]);
    }
    DFS(0,0,0);
    printf("%d\n",max_value);
    system("pause");
    return 0;
}