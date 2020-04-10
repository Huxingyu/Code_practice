#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    vector<int> x;
    for(int i=0;i<5;i++){
        x.push_back(i);
    }
    x.erase(x.begin(),x.begin()+2);
    for(int i=0;i<x.size();i++){
        printf("%d ",x[i]);
    }
    system("pause");
    return 0;
}