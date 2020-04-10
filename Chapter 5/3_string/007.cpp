#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string str="abcd";
    string add="efgh";
    str.insert(str.end(),add.begin(),add.end());
    cout<<str<<endl;
    system("pause");
    return 0;
}