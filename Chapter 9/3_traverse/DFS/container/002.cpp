//rework string

#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    string str="huxingyu";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        printf("%c",*it);
    }
    system("pause");
    return 0;
}
