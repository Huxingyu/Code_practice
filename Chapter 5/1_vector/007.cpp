#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    vector<int> x;
    for(int i=0;i<5;i++){
        x.push_back(i);
    }
    vector<int>::iterator it=x.begin();
    for(int i=0;i<x.size();i++){      //only in <vector>&&<string>
        printf("%d ",*(it+i));
    }
    printf("\n");
    for(vector<int>::iterator temp=x.begin();temp!=x.end();temp++){
        printf("%d ",*temp);
    }
    system("pause");
    return 0;
}