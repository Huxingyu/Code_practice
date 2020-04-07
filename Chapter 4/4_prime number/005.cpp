#include <stdio.h>
#include <stdlib.h>
#define max 10

int x[max][max];

int main(){
    int shuaishuaishuai,zhuzige;
    for(int i=0;i<max;i++){
        for(int j=0;j<max;j++){
            if(j>5){
                break;
            }
            shuaishuaishuai=j;
        }
        zhuzige=i;
    }
    printf("%d %d\n",zhuzige,shuaishuaishuai);
    system("pause");
    return 0;
}