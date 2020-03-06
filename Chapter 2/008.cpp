#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[80];
    gets(str);
    int n=strlen(str),a=0,b=0;
    char x[80][80];
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            x[a][b++]=str[i];
        }
        else{
            x[a][b]='\0';
            a++;
            b=0;
        }
    }
    for(int i=a;i>=0;i--){
        printf("%s",x[i]);
        printf(" ");
    }
    printf("\n");
    system("pause");
    return 0;
}