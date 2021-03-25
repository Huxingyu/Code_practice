//缺省的数字

#include <stdlib.h>
#include <stdio.h>
#define max 100

void change(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int x,int num[]){
    for(int i=0;i<x;i++){
        for(int j=0;j<x-i;j++){
            if(num[j]>num[j+1] && j+1<x-i){
                change(&num[j],&num[j+1]);
            }
        }
    }
}

int main(){
    int x,j=0,num[max],num_sort[max];
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&num[i]);
    }
    int num_min=num[0],num_max=num[x-1];
    for(int i=num_min;i<num_max;i++){
        if(num[j]!=i){
            printf("%d ",i);
            continue;
        }
        j++;
    }  
    printf("\n");
    system("pause");
    return 0;
}
