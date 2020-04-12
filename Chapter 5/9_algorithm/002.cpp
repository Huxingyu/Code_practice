#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define max 5

using namespace std;

int main(){
    int x[max];
    vector<int> y;
    vector<int>::iterator it;
    for(int i=0;i<5;i++){
        x[i]=i;
    }
    reverse(x,x+sizeof(x)/4);
    for(int i=0;i<5;i++){
        printf("%d ",x[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        y.push_back(i);
    }
    reverse(y.begin(),y.end());
    for(it=y.begin();it!=y.end();it++){
        printf("%d ",*it);
    }
    system("pause");
    return 0;
}
