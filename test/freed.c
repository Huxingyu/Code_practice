#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str=(char*)malloc(20*sizeof(char));
    strcpy(str,"huhu");
    puts(str);
    free(str);
    if(str){
        puts(str);
    }
    system("pause");
    return 0;
}