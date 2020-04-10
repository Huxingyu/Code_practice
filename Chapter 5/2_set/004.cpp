#include <stdio.h>
#include <stdlib.h>
#include <set>

using namespace std;

int main(){
    set<int> x;
    set<int>::iterator it;
    for(int i=0;i<10;i++){
        x.insert(i);
    }
    printf("%d\n",x.size());
    it=x.find(3);
    x.erase(x.begin(),it);
    printf("%d\n",x.size());
    for(it=x.begin();it!=x.end();it++){
        printf("%d ",*it);
    }
    printf("\n");
    x.clear();
    printf("%d\n",x.size());
    system("pause");
    return 0;
}