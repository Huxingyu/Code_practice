#include <stdio.h>
#include <stdlib.h>
#include <set>

using namespace std;

int main(){
    set<int> x;
    set<int>::iterator it;
    for(int i=0;i<5;i++){
        x.insert(i);
    }
    for(it=x.begin();it!=x.end();it++){
        printf("%d ",*it);
    }
    x.erase(x.find(2));
    printf("\n");
    for(it=x.begin();it!=x.end();it++){
        printf("%d ",*it);
    }
    printf("\n");
    system("pause");
    return 0;
}