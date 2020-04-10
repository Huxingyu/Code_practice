#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    string::iterator it;
    string str="abcd";
    for(it=str.begin();it!=str.end();it++){
        printf("%c",*it);
    }
    printf("\n");
    system("pause");
    return 0;
}