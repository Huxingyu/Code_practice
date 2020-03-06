#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[5]={5,2,4,3,1};
    int d=sizeof(x)/4;
    for(int i=0;i<d;i++){
        for(int j=d-1-i;j>0;j--){
            if(x[d-1-j]>x[d-j]){
                int temp=x[j];
                x[j]=x[j-1];
                x[j-1]=temp;
            }
        }
    }
    for(int i=0;i<d;i++){
        printf("%d ",x[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

//封存