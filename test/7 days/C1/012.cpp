#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void func(int a,int b){
    int x=1;
    float y=3.14;
    cout<<&a<<" "<<&b<<" "<<&x<<" "<<&y<<endl;
}

int main(){
    func(1,2);
    system("pause");
    return 0;
}