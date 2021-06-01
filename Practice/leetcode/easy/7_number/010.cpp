//191. Number of 1 Bits

#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
    public:
        int hammingWeight(uint32_t n) {
            int count=0;
            while(n!=0){
                n&=n-1;
                count++;
            }
            return count;
        }
};

// class Solution {
//     public:
//         int hammingWeight(uint32_t n) {
//             int temp,count=0;
//             while(n!=0){
//                 temp=n&1;              
//                 if(temp==1){
//                     count++;
//                 }
//                 n=n>>1;
//             }
//             return count;
//         }
// };

int main(){
    Solution x;
    cout<<x.hammingWeight(00000000000000000000000000001011);
    system("pause");
    return 0;
}