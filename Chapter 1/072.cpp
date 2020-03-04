#include <stdio.h>
#include <stdlib.h>

void change(int *p){
    *p=233;
}

int main(){
    int a=1;
    int *p=&a;
    change(p);
    printf("%d\n",a);
    system("pause");
    return 0;
}