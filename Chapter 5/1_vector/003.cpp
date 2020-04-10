#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    vector<int> x;
    for(int i=0;i<5;i++){
        x.push_back(i);
    }
    x.pop_back();
    for(vector<int>::iterator it=x.begin();it!=x.end();it++){
        printf("%d ",*it);
    }
    printf("\n");
    system("pause");
    return 0;
}

//push_back(),pop_back;