#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
    int num[5]={1,2,3,4,5};
    int *p=num;
    cout<<*(p+4)<<endl;
    system("pause");
    return 0;
}