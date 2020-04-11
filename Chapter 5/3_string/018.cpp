#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int n;

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
        e=0;
    }
    string ans;
    int temp=0;
    k=0;
    while(ans.length()<n){
        if(k<str.length()){
            ans+=str[k++];
        }
        else{
            ans+='0';
        }
    }
    return ans;
}

int main(){
    string str1,str2;
    int e1=0,e2=0;
    cin>>n>>str1>>str2;
    string ans1=change(str1,e1);
    string ans2=change(str2,e2);
    if(ans1==ans2 && e1==e2){
        cout<<"YES 0."<<ans1<<"*10^"<<e1<<endl;
    }
    else{
        cout<<"NO 0."<<ans1<<"*10^"<<e1<<" "<<"0."<<ans2<<"*10^"<<e2<<endl;
    }
    system("pause");
    return 0;
}