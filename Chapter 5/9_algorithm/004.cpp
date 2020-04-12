#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(){
    int x[10]={0};
    fill(x+5,x+10,233);
    for(int i=0;i<10;i++){
        printf("%d ",x[i]);
    }
    system("pause");
    return 0;
}