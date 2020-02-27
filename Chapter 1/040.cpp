#include <stdio.h>
#include <stdlib.h>

int main(){
    int temp,a[5]={4,2,5,1,3};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    system("pause");
    return 0;
}
