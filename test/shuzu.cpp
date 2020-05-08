#include <stdio.h>
#include <stdlib.h>
#define max 10

int num[max];

int main(){
    int num[]={1,2,3};
    int n=sizeof(num)/4;
    printf("%d\n",n);
    system("pause");
    return 0;
}