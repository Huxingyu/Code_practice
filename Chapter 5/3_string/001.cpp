#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    string str="abcd";      //不能使用gets
    for(int i=0;i<str.length();i++){
        printf("%c",str[i]);
    }
    system("pause");
    return 0;
}