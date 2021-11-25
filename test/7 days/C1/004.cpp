#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
    int num[5]={1,2,3,4,5};     
    int *q,*p=num;
    q=p+1;
    cout<<*p<<" "<<*q<<endl;
    // cout<<&num[0]<<" "<<&num[1]<<endl;
    system("pause");
    return 0;
}

//0x61fefc-6422268
//0x61ff00-6422272
