#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

struct one{
    string name;
    int age;
    float money;
};

void display(one x){
    cout<<x.name<<" "<<x.age<<" "<<x.money<<endl;
}

int main(){
    one x{"huxingyu",25,3.14};
    display(x);
    system("pause");
    return 0;
}