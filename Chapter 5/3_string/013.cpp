#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

string change(string str,int &e){
    int k=0;
    while(str[0]=='0'){            //str.begin()=="0"
        str.erase(str.begin());
    }
    if(str[0]=='.'){
        str.erase(str.begin());
        while(str[0]=='0'){
            str.erase(str.begin());
            e--;
        }
    }else{
        while(k<str.size() && str[k]!='.'){
            k++;
            e++;
    }
        if(k<str.size()){
            str.erase(str.begin()+k);
        }
    }
    return str;
}

int main(){
    int e=0;
    string str,ans;
    cin>>str;
    ans=change(str,e);
    cout<<ans<<endl;
    system("pause");
    return 0;
}