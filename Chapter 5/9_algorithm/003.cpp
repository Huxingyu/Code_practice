#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(){
    int x[]={1,2,3};
    do{
        printf("%d %d %d\n",x[0],x[1],x[2]);
    }while(next_permutation(x,x+3));
    system("pause");
    return 0;
}