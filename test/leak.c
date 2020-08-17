#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p=(int*)malloc(10*sizeof(int));
    p=(int*)malloc(20*sizeof(int));
    free(p);
    p=NULL;
    system("pause");
    return 0;
}