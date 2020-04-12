#include <utility>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    pair<int,int> x(1,2);
    pair<int,int> y(1,3);
    if(x<y){
        printf("wo");
    }
    system("pause");
    return 0;
}