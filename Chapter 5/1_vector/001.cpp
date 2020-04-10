#include <stdio.h>
#include <stdlib.h>
#include <vector>
#define max 5

using namespace std;

int main(){
    vector<int> x;
    for(int i=0;i<max;i++){
        x.push_back(i);
    }
    for(int i=0;i<max;i++){
        printf("%d ",x[i]);
    }
    printf("\n");
    vector<int>::iterator it=x.begin();
    for(int i=0;i<max;i++){
        printf("%d ",*(it+i));
    }
    system("pause");
    return 0;
}