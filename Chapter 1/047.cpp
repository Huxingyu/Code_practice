#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char x[]="huxingyu";
    for(int i=0;i<strlen(x);i++){
        printf("%c",x[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}