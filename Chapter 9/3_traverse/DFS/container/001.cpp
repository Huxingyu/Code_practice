//rework map

#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;

int main(){
    map<char,int> mp;
    mp['a']=1;
    mp['b']=2;
    mp['c']=3;
    map<char,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    if(mp.find('a')!=mp.end()){
        printf("ii");
    }
    system("pause");
    return 0;
}