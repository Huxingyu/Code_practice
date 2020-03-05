#include <stdio.h>
#include <stdlib.h>

void change(int* &a,int* &b){
    int *temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=1,b=2;
    int *p=&a,*q=&b;
    printf("%d %d\n",*p,*q);
    change(p,q);
    printf("%d %d\n",a,b);      //交换之后a,b仍不变
    printf("%d %d\n",*p,*q);
    system("pause");
    return 0;
}