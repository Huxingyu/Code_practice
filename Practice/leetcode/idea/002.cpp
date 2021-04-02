#include <iostream>
#include <cstdlib>

using namespace std;

int i=0;

void add(){
    i++;
}

// void recursion(){
//     if(i<10){
//         add();
//         recursion();
//     }
// }

void recursion(){
    while(i<10){
        add();
        recursion();
    }
}

int main(){
    recursion();
    cout<<i<<endl;
    system("pause");
    return 0;
}