//70. Climbing Stairs

#include <cstdlib>
#include <iostream>

class Solution {
private:
    int num[50]={0};
public:
    int climbStairs(int n) {
        num[1]=1,num[2]=2;
        for(int i=3;i<=n;i++){
            num[i]=num[i-1]+num[i-2];
        }     
        return num[n];
    }
};

// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==0)    return 0;
//         if(n==1)    return 1;
//         if(n==2)    return 2;
//         return climbStairs(n-1)+climbStairs(n-2);
//     }
// };

// class Solution {
// private:
//     int num[45]={0};
// public:
//     int climbStairs(int n) {
//         return cal(0,n);
//     }
//     int cal(int i,int n){
//         if(num[i]!=0){
//             return num[i];
//         }
//         if(i>n){
//             return 0;
//         }
//         if(i==n){
//             return 1;
//         }
//         num[i]=cal(i+1,n)+cal(i+2,n);
//         return num[i];
//     }
// };

// [1] method
// class Solution {
// public:
//     int climbStairs(int n) {
//         int ans=cal(0,n);
//         return ans;
//     }
//     int cal(int i,int n){
//         if(i>n){
//             return 0;
//         }
//         if(i==n){
//             return 1;
//         }
//         return cal(i+1,n)+cal(i+2,n);
//     }
// };