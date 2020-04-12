#include <stdlib.h>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string,int> x;
    x.insert(make_pair("huhu",1));
    x.insert(pair<string,int>("haha",2));
    map<string,int>::iterator it;
    for(it=x.begin();it!=x.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    system("pause");
    return 0;
}