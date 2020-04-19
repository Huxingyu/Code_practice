//DFS-剪枝算法

#include <stdio.h>
#include <stdlib.h>
#define max 10

int n,max_weight,max_value=0;
int pre_weight[max],pre_value[max];

void DFS(int index,int sum_weight,int sum_value){
    if(index==n){
        return;
    }
    DFS(index+1,sum_weight,sum_value);
    if(sum_weight+pre_weight[index]<=max_weight){
        if(sum_value+pre_value[index]>max_value){
            max_value=sum_value+pre_value[index];
        }
        DFS(index+1,sum_weight+pre_weight[index],sum_value+pre_value[index]);
    }
}

int main(){
    scanf("%d %d",&n,&max_weight);
    for(int i=0;i<n;i++){
        scanf("%d",&pre_weight[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&pre_value[i]);
    }
    DFS(0,0,0);
    printf("%d\n",max_value);
    system("pause");
    return 0;
}