//7. Reverse long longeger

#include <iostream>
#include <vector>
#include <cstdlib>
#include <queue>
#include <stack>

using namespace std;

class Solution {
    public:
        long long temp,k=1,ans=0;
        queue<long long> q;
        stack<long long> st;
        int reverse(int x) {        //x=120
            long long _x=abs(x);
            while(_x!=0){
                q.push(_x%10);     //q.push{0,2,1}
                _x/=10;
            }
            while(q.front()==0){    //q.push{2,1}    
                q.pop();
            }
            while(q.empty()!=true){ //st.push{2,1}
                st.push(q.front());
                q.pop();
            }
            while(st.empty()!=true){
                ans+=(st.top()*k);
                k*=10;
                st.pop();
            }
            cout<<ans<<endl;
            if(ans<2147483648){
                if(x>=0){
                    return ans;
                }else{
                    return -ans;
                }
            }else{
                return 0;
            }
        }
};

int main(){
    Solution x;
    cout<<x.reverse(1534236469)<<endl;
    system("pause");
    return 0;
}