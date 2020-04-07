#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    for(int i=0;i<50;i++){
        printf("%d ",(int)(round(1.0*rand()/RAND_MAX*100+0)));
    }
    system("pause");
    return 0;
}