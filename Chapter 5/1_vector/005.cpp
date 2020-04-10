#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    vector<int> x;
    for(int i=0;i<5;i++){
        x.push_back(i);
    }
    for(int i=0;i<x.size();i++){
        printf("%d ",x[i]);
    }
    x.insert(x.begin()+5,5);
    printf("\n");
    for(int i=0;i<x.size();i++){
        printf("%d ",x[i]);
    }
    x.erase(x.begin());
    printf("\n");
    for(int i=0;i<x.size();i++){
        printf("%d ",x[i]);
    }
    system("pause");
    return 0;
}