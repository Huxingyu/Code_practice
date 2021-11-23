#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class student{
    private:
        int m_age;
        int m_test;
        // string m_name;
    public:
        student();
        student(int age,int test);
        void display();  
};

student::student(int age,int test){
    m_age=age;
    m_test=test;
}

// void student::setM(string name,int age){
//     m_name=name;
//     m_age=age;
// }

void student::display(){
    cout<<m_age<<" "<<m_test<<endl;
}

int main(){
    student hu(25,40);
    //hu.setM("huxingyu",25);
    int *p=(int*) &hu;
    cout<<*(p+1)<<endl;
    system("pause");
    return 0;
}