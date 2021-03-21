#include <iostream>
#include <cstdlib>

typedef unsigned long long ll;

using namespace std;

ll fac(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*fac(n-1);
    }
}

int main(){
    cout<<fac(10)<<endl;
    system("pause");
    return 0;
}