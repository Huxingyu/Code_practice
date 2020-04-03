#include <stdio.h>
#include <stdlib.h>
#define max 20

void sort(int num1[],int num2[]){
    int i=0,j=0,n=0,ans[max];
    int x=sizeof(num1)/4,y=sizeof(num2)/4;
    while(i<x && j<y){
        if(num1[i]>=num2[j]){       //problem
            ans[n++]=num1[i];
            i++;
        }
        else{
            ans[n++]=num2[j];
            j++;
        }
    }
    if(i<x){
        ans[n++]=num1[i++];
    }
    if(j<y){
        ans[n++]=num2[j++];
    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
}

int main(){
    int num1[]={1,3,5,7,9};
    int num2[]={2,4,6,8,10};
    sort(num1,num2);
    printf("\n");
    system("pause");
    return 0;
}