#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int right=10,left=0;
    for(int i=0;i<20;i++){
        int x=rand()%(right-left+1)+left;
        printf("%d ",x);
    }
    system("pause");
    return 0;
}
