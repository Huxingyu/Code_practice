#include <stdio.h>

int main(){
    const int x=10;
    int* p=(int*) &x;
    *p=233;
    printf("%d\n",x);
    return 0;
}