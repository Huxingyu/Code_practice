#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <set>
#define max 10

using namespace std;

int main(){
    int num[max];
    set<int> x;
    x.insert(4);
    x.insert(2);
    x.insert(2);
    x.insert(3);
    x.insert(1);
    for(set<int>::iterator it=x.begin();it!=x.end();it++){
        printf("%d ",*it);
    }
    system("pause");
    return 0;
}