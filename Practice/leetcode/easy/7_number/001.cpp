#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0,five=5;
        while(n>=five){
            sum+=n/five;
            five*=5;
            cout<<n<<" "<<five<<endl;
        }
        return sum;
    }
};

int main(){
    Solution x;
    cout<<x.trailingZeroes(200)<<endl;
    system("pause");
    return 0;
}