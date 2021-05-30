//231. Power of Two

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if(n<=0){
                return false;
            }
            int temp,sum=0;
            while(n!=1){
                temp=n%2;
                if(temp==1){
                    return false;
                }
                n/=2;
            }
            return true;
        }
};

int main(){
    Solution x;
    cout<<x.isPowerOfTwo(7)<<endl;
    system("pause");
    return 0;
}