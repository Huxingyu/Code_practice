#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[5]={1,2,3,4,5};
    memset(a,-1,sizeof(a));
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}