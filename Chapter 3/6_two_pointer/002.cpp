#include <stdio.h>
#include <stdlib.h>

void cal(int num[],int n,int x){
    int i=0,j=n-1;
    while(i<j){
        if(num[i]+num[j]==x){
            printf("%d %d\n",num[i],num[j]);
            i++;
            j--;
        }
        else if(num[i]+num[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int num[]={1,2,3,4,5,6,7};
    int n=sizeof(num)/4;
    cal(num,n,n+1);
    system("pause");
    return 0;
}

//时间复杂度->O(N)