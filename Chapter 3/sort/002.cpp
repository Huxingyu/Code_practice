#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[5]={2,1,8,3,4};
    int temp;
    for(int i=1;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",x[i]);
    }
    system("pause");
    return 0;
}

//冒泡排序