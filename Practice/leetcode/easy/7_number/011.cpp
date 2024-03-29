//190. Reverse Bits

#include <iostream>
#include <vector>
#include <stack>
#include <cstdlib>

using namespace std;

class Solution {
    public:
        uint32_t reverseBits(uint32_t n) {
            int count=0;
            uint32_t ans=0,temp;
            while(n!=0){
                temp=n&1;
                if(count>0){
                    ans=ans<<1; 
                }
                ans|=temp;        
                n=n>>1;
                count++;
            } 
            for(int i=0;i<32-count;i++){
                ans=ans<<1;
            }
            return ans;
        }
};

int main(){
    Solution x;
    //00000010100101000001111010011100-43261596
    //00111001011110000010100101000000-964176192
    cout<<x.reverseBits(43261596)<<endl;
    //cout<<(3<<1)<<endl;
    system("pause");
    return 0;
}