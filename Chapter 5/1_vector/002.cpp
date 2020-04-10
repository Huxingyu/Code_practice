#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    vector<int> x;
    for(int i=0;i<5;i++){
        x.push_back(i);
    }
    for(vector<int>::iterator i=x.begin();i!=x.end();i++){
        printf("%d",*i);
    }
    system("pause");
    return 0;
}