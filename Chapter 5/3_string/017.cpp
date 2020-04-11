#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int n=3;

string change(string str,int &e){
    int k=0;
    while(str[0]=='0'){
        str.erase(str.begin());
    }
    if(str[0]=='.'){
        str.erase(str.begin());
        while(str[0]=='0'){
            str.erase(str.begin());
            e--;
        }
    }
    else{
        while(k<str.length()&& str[k]!='.'){
            k++;
            e++;
        }
        if(k<str.length()){
            str.erase(str.begin()+k);
        }
    }
    if(str.length()==0){
        e=1;
    }
    string ans;
    cout<<ans.length()<<endl;
    k=0;
    while(ans.length()<n){
        if(k<str.length()){
            ans+=str[k++];
            cout<<"\n"<<ans.length();
        }
        else{
            ans+='0';
        }
    }
    return str;
}

int main(){
    string str;
    int e=0;
    cin>>str;
    string ans=change(str,e);
    cout<<ans<<" "<<e<<endl;
    system("pause");
    return 0;
}