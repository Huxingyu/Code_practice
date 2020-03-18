#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(){
    int x[]={5,4,3,2,1};
    sort(x,x+5);
    int y=sizeof(x)/4;
    for(int i=0;i<y;i++){
        printf("%d\n",x[i]);
    }
    system("pause");
    return 0;
}