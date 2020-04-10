#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string str="abcd";
    string add="efgh";
    //str.erase(3);
    str+=add;
    str.erase(str.end()-2,str.end());
    cout<<str<<endl;
    system("pause");
    return 0;
}