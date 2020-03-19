#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
    char x[]={'b','d','e','a','f','w','z'};
    int y=strlen(x);
    sort(x,x+7);
    for(int i=0;i<y;i++){
        printf("%c ",x[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}