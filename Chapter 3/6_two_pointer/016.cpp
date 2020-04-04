#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand((unsigned)time(NULL));
    for(int i=0;i<10;i++){
        printf("%d ",rand()%4+6);
    }
    system("pause");
    return 0;
}

//随机数