//leetcode-20 valid-parentheses
//不使用map

#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool is_right(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            st.push(s[i]);
        }else{
            if(st.empty()==true)    return false;
            if(s[i]=='}' && st.top()!='{') return false;
            if(s[i]==']' && st.top()!='[') return false;
            if(s[i]==')' && st.top()!='(') return false;
            st.pop(); 
        }   
    }
    return st.empty();
}

int main(){
    string s;
    cin>>s;
    bool ans=is_right(s);
    if(ans==true){
        printf("right");
    }else{
        printf("error");
    }
    system("pause");
    return 0;
}