//204. Count Primes

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Solution{
    public:
        int countPrimes(int n){
            int count=0;
            bool p[100]={0};
            for(int i=2;i<n;i++){
                if(p[i]==false){
                    count++;
                    for(int j=i+i;j<n;j+=i){
                        p[i]=true;
                    }
                }
            }
            return count;
        }
};

// class Solution {
//     public:
//         int count=0;
//         int countPrimes(int n) {
//             for(int i=2;i<=n;i++){
//                 if(is_prime(i)){
//                     count++;
//                 }
//             }
//             return count;
//         }
//         bool is_prime(int x){
//             for(int i=2;i<=sqrt(x);i++){
//                 if(x%i==0){
//                     return false;
//                 }
//             }
//             return true;
//         }
// };

//499979
//1500000
//5000000