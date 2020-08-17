#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    char *buffer;

    scanf("%d",&n);
    buffer=(char*)malloc(n+1);

    if(buffer==NULL){
        exit(1);            //error exit
    }

    for(i=0;i<n;i++){
        buffer[i]=rand()%26+'a';
    }

    buffer[n]='\n';         
    //In C/C++, when you want to add an end mark to a string, you should use ‘\0’ instead of NULL or 0

    for(i=0;i<=n;i++){
        printf("%c",buffer[i]);
    }

    system("pause");
    return 0;
}