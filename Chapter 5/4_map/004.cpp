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
    it=mp.find('b');
    mp.erase(it,mp.end());
    for(it=mp.begin();it!=mp.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    mp.clear();
    printf("%d",mp.size());
    system("pause");
    return 0;
}