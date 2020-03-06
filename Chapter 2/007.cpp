#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int k=0;
    char x[256];
    gets(x);
    int n=strlen(x);
    for(int i=0;i<n/2;i++){
        if(x[i]!=x[n-1-i]){
            printf("NO");
            k=1;
            break;
        }
    }
    if(k==0) printf("YES");
    printf("\n");
    system("pause");
    return 0;
}