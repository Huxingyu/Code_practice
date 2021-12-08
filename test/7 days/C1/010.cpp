#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct test{
    int a;
    char b;
    int c;
};

int main(){
    test x={1,'z',2};
    //cout<<&x.a<<" "<<&x.b<<" "<<&x.c<<endl;     
    printf("%d %d %d\n",&x.a,&x.b,&x.c);
    system("pause");
}