#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    string::iterator x;
    string str="abcd";
    x=str.begin();
    for(int i=0;i<str.size();i++){
        printf("%c",str[i]);
        printf("%c ",*(x+i));       
    }
    system("pause");
    return 0;
}

//两种写法等价
//num[i]==*(x+i)