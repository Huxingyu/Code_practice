#include <stdio.h>
#include <map>
#include <stdlib.h>

using namespace std;

int main(){
    map<char,int> mp;
    map<char,int>::iterator it;
    mp['c']=3;
    mp['b']=2;
    mp['a']=1;
    for(it=mp.begin();it!=mp.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    system("pause");
    return 0;
}

//map也使用红黑树自动排序