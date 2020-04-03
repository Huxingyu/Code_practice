#include <stdio.h>
#include <stdlib.h>
#define max 10

void search(int num[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(num[i]+num[j]==n){
                printf("%d %d\n",num[i],num[j]);
            }
        }
    }
}

int main(){
    int num[]={1,2,3,4,5,6,7};
    int n=sizeof(num)/4;
    search(num,n+1);
    system("pause");
    return 0;
}

//时间复杂度->O(N^2)