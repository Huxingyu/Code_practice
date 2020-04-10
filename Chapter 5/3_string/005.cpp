#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string str_1="abcd";
    string str_2="abcv";
    string str_3=str_1+str_2;
    cout<<str_3<<endl;
    cout<<str_1.length()<<" "<<str_3.size()<<endl;
    if(str_1>str_2){
        printf("str_1 bigger");
    }
    else{
        printf("str_2 bigger");
    }
    system("pause");
    return 0;
}