#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max 20

using namespace std;

bool cmp(int x,int y){
    return x<y;
}

int ans[max];

void sort_x(int num1[],int num2[],int x,int y){
    int i=0,j=0,n=0;
    while(i<x && j<y){
        if(num1[i]<=num2[j]){
            ans[n++]=num1[i++];
        }
        else{
            ans[n++]=num2[j++];
        }
    }
    if(i<x){
        ans[n++]=num1[i++];
    }
    else{
        ans[n++]=num2[j++];
    }
}

int main(){
    int num1[]={3,1,5,9,7};
    int num2[]={8,4,2,6,0};
    int x=sizeof(num1)/4,y=sizeof(num2)/4;
    sort(num1,num1+x,cmp);
    sort(num2,num2+y,cmp);
    sort_x(num1,num2,x,y);
    for(int i=0;i<x+y;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}