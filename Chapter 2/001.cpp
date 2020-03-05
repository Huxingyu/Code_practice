#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,i=0;
    scanf("%d",&x);     
    while(x!=1){
        if(x%2==0){
            x/=2;
            i++;
        }
        else{
            x=(x*3+1)/2;
            i++;
        }
    }
    printf("%d\n",i);
    system("pause");
    return 0;
}

//初步模拟