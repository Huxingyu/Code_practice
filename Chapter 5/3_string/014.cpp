#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

string change(string str,int e){
    int k;                          //e1
    while(str[0]=='0'){
        str.erase(str.begin());
    }
    if(str[0]=='.'){
        str.erase(str.begin());
        while(str[0]=='0'){
            str.erase(str.begin());
        }   
    }
    else{
        while(k<str.length() && str[k]!='.'){
            k++;
            e++;
        }
        cout<<k<<" "<<str.length()<<endl;
        if(k<str.length()){
            str.erase(str.begin()+k);
        }
    }
    return str;
}

int main(){
    int e;
    string str,ans;
    cin>>str;
    ans=change(str,e);
    cout<<ans<<endl;            
    system("pause");
    return 0;
}