#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string str="huxingyu";
    string hu="yu";
    string sh="shuai";
    if(str.find(hu)!=string::npos){
        cout<<str.find(hu)<<endl;
    }
    else{
        printf("0");
    }
    if(str.find(sh)!=string::npos){
        cout<<str.find(sh)<<endl;
    }
    else{
        printf("hahah");
    }
    system("pause");
    return 0;
}