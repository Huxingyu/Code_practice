#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(string x,string y){
    return x.length()>y.length();
}

int main(){
    string str[3]={"bbbb","aaa","ccccc"};
    sort(str,str+3);
    for(int i=0;i<3;i++){
        cout<<str[i]<<endl;
    }
    sort(str,str+3,cmp);
    for(int i=0;i<3;i++){
        cout<<str[i]<<endl;
    }
    system("pause");
    return 0;
}