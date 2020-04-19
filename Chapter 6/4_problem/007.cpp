//leetcode-20 valid-parentheses
//使用map
#include <iostream>
#include <stdlib.h>
#include <stack>
#include <map>
#include <string>

using namespace std;

map<char,char> mp;
stack<int> st;
string s;

bool is_right(string s){
    mp[')']='(';
    mp[']']='[';
    mp['}']='{';
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.size()==0) return false;
            if(mp[s[i]]!=st.top()) return false;
            st.pop();
        }
    }
    if(st.empty()==true){
        return true;
    }  
}

int main(){
    cin>>s;
    bool x=is_right(s);
    if(x){
        printf("ok");
    }else{
        printf("no");
    }
    system("pause");
    return 0;
} 