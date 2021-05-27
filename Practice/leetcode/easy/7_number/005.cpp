//202. Happy Number

#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        unordered_set<int> st;
        bool isHappy(int n) {
            while(n!=1){
                if(st.count(n)==true){
                    return false;
                }
                st.insert(n);
                n=trans_next(n);
            }
            return true;
        }
        int trans_next(int n){
            int sum=0;
            while(n!=0){
                sum+=pow(n%10,2);
                n/=10;
            }
            return sum;
        }
};

int main(){
    Solution x;
    cout<<x.isHappy(19)<<endl;
    system("pause");
    return 0;    
}