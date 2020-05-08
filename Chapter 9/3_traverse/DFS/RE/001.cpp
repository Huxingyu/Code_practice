//复习一下DFS算法

#include <stdio.h>
#include <stdlib.h>
#define max 10

int n,v,max_value=0;
int weight[max],value[max];

void DFS(int index,int sum_weight,int sum_value){
    if(index==n){
        if(sum_weight<=v && sum_value>max_value){
            max_value=sum_value;
        }
        return;
    }
    DFS(index+1,sum_weight,sum_value);
    DFS(index+1,sum_weight+weight[index],sum_value+value[index]);
}

int main(){
    scanf("%d %d",&n,&v);
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