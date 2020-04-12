#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
    int x=1,y=2;
    printf("%d %d\n",max(x,y),min(x,y));
    printf("%d %.2f\n",abs(-1),fabs(-3.14));
    swap(x,y);
    printf("%d %d\n",x,y);
    system("pause");
    return 0;
}