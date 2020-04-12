#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int x,int y){
    return x>y;
}

int main(){
    vector<int> x;
    for(int i=0;i<3;i++){
        x.push_back(i);
    }
    sort(x.begin(),x.end(),cmp);
    for(int i=0;i<3;i++){
        printf("%d ",x[i]);
    }
    system("pause");
    return 0;
}