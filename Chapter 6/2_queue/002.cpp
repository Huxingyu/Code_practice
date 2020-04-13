#include <stdio.h>
#include <stdlib.h>
#include "001.cpp"

int main(){
    queue x;
    x.init();
    for(int i=0;i<5;i++){
        x.push(i);
    }
    cout<<x.size()<<endl;
    while(x.empty()!=true){
        x.pop();
    }
    cout<<x.size()<<endl;
    system("pause");
    return 0;
}