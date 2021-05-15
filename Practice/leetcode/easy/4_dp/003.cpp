//509. Fibonacci Number

#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
    private:
        int nums[30]={0};
    public:
        int fib(int n) {
            nums[0]=0,nums[1]=1;
            for(int i=2;i<=n;i++){
                nums[i]=nums[i-1]+nums[i-2];
            }
            return nums[n];
        }
};

// class Solution {
// public:
//     int nums[30]={0};
//     int fib(int n) {
//         if(n==0){
//             return 0;
//         }
//         if(n==1 || n==2){
//             return 1;
//         }    
//         if(nums[n]!=0){
//             return nums[n];
//         }
//         nums[n]=fib(n-1)+fib(n-2);
//         return nums[n];
//     }
// };

int main(){
    Solution x;
    cout<<x.fib(3)<<endl;
    system("pause");
    return 0;
}