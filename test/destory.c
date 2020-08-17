#include <stdio.h>
#include <stdlib.h>

int *p;

void func(int m,int n){
    int a=1,b=2;
    p=&a;
}

int main(){
    func(10,20);
    printf("%d\n",*p);
    system("pause");
    return 0;
}