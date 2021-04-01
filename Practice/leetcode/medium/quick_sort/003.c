//合并序列

#include <stdio.h>
#include <stdlib.h>
#define max 10000

int ans[max];

int hebing(int num1[],int num2[]){
    int num1_i=0,num2_i=0,index=0;
    int num1_length=sizeof(num1),num2_length=sizeof(num2);
    while(num1_i<num1_length && num2_i<num2_length){
        if(num1[num1_i]<=num2[num2_i]){
            ans[index++]=num1[num1_i++];
        }else{
            ans[index++]=num2[num2_i++];
        }
    }
    while(num1_i<num1_length){
        ans[index++]=num1[num1_i++];
    }
    while(num2_i<num2_length){
        ans[index++]=num2[num2_i++];
    }
    return index;
}

int main(){
    int num1[]={1,3,5,7};
    int num2[]={2,4,6,8};
    int x=hebing(num1,num2);
    for(int i=0;i<x;i++){
        printf("%d ",ans[i]);
    }
    system("pause");
    return 0;
}