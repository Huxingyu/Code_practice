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
        while(k<str.length() && str[k]!='.'){
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
    k=0;
    int temp=0;
    while(temp<n){
        if(k<str.length()){
            ans+=str[k++];
            temp++;
        }
        else{
            ans+='0';
            temp++;
        }
    }
    return ans;
}

int main(){
    int e1=0,e2=0;
    string str1,str2,ans1,ans2;
    cin>>str1>>str2;
    ans1=change(str1,e1);
    ans2=change(str2,e2);
    cout<<ans1<<" "<<e1<<"\n"<<ans2<<" "<<e2<<endl;
    if(ans1==ans2 && e1==e2){
        printf("right");
    }            
    else{
        printf("no");
    }
    system("pause");
    return 0;
}