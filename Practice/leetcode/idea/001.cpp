//double while

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i=0,j=10,temp=0;
    while(i<j){                     //first 'while' will faile
        while(temp<100){
            i++;
            temp++;
            cout<<i<<" ";
        }
    }
    system("pause");
    return 0;
}