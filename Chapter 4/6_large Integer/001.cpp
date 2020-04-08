#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10

int main(){
    int num[max]={1};
    memset(num,0,sizeof(num));
    for(int i=0;i<max;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}