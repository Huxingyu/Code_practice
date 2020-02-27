#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[5][6]={{1,1,1},{2,2,2},{},{},{5,5,5}};
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}