#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <set>
#define max 10

using namespace std;

int main(){
    int num[max];
    vector<int> x;
    set<int> y;
    for(int i=0;i<max;i++){
        x[i]=rand()%10+1;
        //y[i]=rand()%10+1;           //set不支持
    }
    for(int i=0;i<max;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}

//总结