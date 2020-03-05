#include <stdio.h>
#include <stdlib.h>

struct huhu{
    int age;
    char gender;
    huhu(int _age,int _gender){
        age = _age;
        gender = _gender;
    }
};

int main(){
    huhu huxingyu(23,'M');
    printf("%d %c\n",huxingyu.age,huxingyu.gender);
    system("pause");
    return 0;
}