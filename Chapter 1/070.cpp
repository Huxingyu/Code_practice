#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5]={1,2,3,4,5};
    for(int *p=a;p<a+5;p++){
        printf("%d %d\n",p,*p);
    }
    system("pause");
    return 0;
}