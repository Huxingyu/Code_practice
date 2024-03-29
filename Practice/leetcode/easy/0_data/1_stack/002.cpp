#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }else{
                if(st.empty() || (st.top()=='(' && s[i]!=')') || (st.top()=='[' && s[i]!=']') || (st.top()=='{' && s[i]!='}')){
                    return false;
                }else{
                    st.pop();
                }
            }
        }
        return st.empty();        
    }
};

int main(){
    Solution x;
    string test="]";
    cout<<x.isValid(test)<<endl;
    system("pause");
    return 0;
}