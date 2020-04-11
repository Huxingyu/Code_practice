#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;

int main(){
    map<char,int> x;
    map<char,int>::iterator it;
    x['a']=1;
    x['b']=2;
    x['c']=3;
    it=x.find('b');
    x.erase(it);
    for(it=x.begin();it!=x.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    system("pause");
    return 0;
}