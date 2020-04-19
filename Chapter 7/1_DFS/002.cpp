#include <stdio.h>
#include <stdlib.h>

int n,max_weight,max_value=0;
int pre_weight[5],pre_value[5];

void DFS(int index,int sum_weight,int sum_value){
    if(index==n){
        if(sum_weight<=max_weight && sum_value>max_value){
            max_value=sum_value;
        }
        return;
    }
    DFS(index+1,sum_weight,sum_value);
    DFS(index+1,sum_weight+pre_weight[index],sum_value+pre_value[index]);
}

int main(){
    //int n,max_weight;           //重定义？
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