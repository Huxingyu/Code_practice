#include <stdio.h>
#include <stdlib.h>

void change(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=1,b=2;
    int *p=&a,*q=&b;
    change(p,q);
    printf("%d %d\n",a,b);
    system("pause");
    return 0;
}