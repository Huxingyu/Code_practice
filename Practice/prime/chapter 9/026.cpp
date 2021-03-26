//int a[] ={0,1,1,2,3,5,8,13,21,55,89}
//vector 0,list 1

#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

using namespace std;

int main(){
    vector<int> vt;
    list<int> lt;
    int a[] ={0,1,1,2,3,5,8,13,21,55,89};
    int num=sizeof(a)/4;
    for(int i=0;i<num;i++){
        lt.push_back(i);
        vt.push_back(i);
    }
    for(auto x=lt.begin();x!=lt.end();x++){
        if(*x%2!=0){
            lt.erase(x);
        }
    }
    for(auto x=lt.begin();x!=lt.end();x++){
        cout<<*x<<" ";
    }
    system("pause");
    return 0;
}