#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string str="zhuzige shuaishuaishuai";
    cout<<str.substr(0,3)<<endl;
    str.clear();
    cout<<str.size()<<endl;
    system("pause");
    return 0;
}