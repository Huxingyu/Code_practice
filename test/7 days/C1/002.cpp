#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class student{
    private:
        string name;
        int age;
        float x;
    public:
        void display();
        student(string _name,int _age,float _x):name(_name),age(_age),x(_x){}
};

    void student::display(){        //公共函数访问私有数据
        cout<<student::age<<" "<<student::name<<" "<<student::x<<endl;
    }

int main(){
    student hu("huxingyu",25,3.14);
    hu.display();
    system("pause");
    return 0;
}