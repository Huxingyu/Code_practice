//写个冒泡

#include <iostream>
#include <cstdlib>

using namespace std;

//void change(int&,int&);
void change(int*,int*);
void seq_maopao(int*);

void change(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=1,b=2;
    cout<<a<<" "<<b<<endl;
    change(&a,&b);
    cout<<a<<" "<<b<<endl;
    system("pause");
    return 0;
}

// void change(int& a,int& b){
//     int temp=a;
//     a=b;
//     b=temp;
// }