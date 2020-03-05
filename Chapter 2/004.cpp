#include <stdio.h>
#include <stdlib.h>

int main(){
    int h,l;
    char y;
    scanf("%d %c",&l,&y);
    if(l%2==0) h=l-1;
    else h=l;
    for(int i=0;i<l;i++){
        printf("%c",y);
    }
    printf("\n");
    for(int i=2;i<h;i++){
        if(i%2==0){
            printf("%c",y);
            for(int i=0;i<l-2;i++){
                printf(" ");
            }
            printf("%c",y);
        }
        else{
            printf("\n");
        }
    }
    printf("\n");
    for(int i=0;i<l;i++){
        printf("%c",y);
    }
    printf("\n");
    system("pause");
    return 0;
}