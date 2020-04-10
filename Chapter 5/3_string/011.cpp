#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string str="huxingyu";
    string temp="yo";
    //str.replace(str.begin(),str.begin()+2,temp);
    str.replace(0,2,temp);
    cout<<str<<endl;
    system("pause");
    return 0;
}