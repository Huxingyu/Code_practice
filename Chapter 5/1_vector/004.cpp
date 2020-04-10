#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
    vector<int> x;
    for(int i=0;i<5;i++){
        x.push_back(i);
    }
    printf("%d\n",x.size());
    x.clear();
    printf("%d\n",x.size());
    system("pause");
    return 0;
}