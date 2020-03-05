#include <stdio.h>
#include <stdlib.h>

struct huhu{
    int age;
    char name[10];    
};

int main(){
    huhu me;
    me.age=23;
    //me.name='huxingyu';
    printf("%d\n",me.age);
    system("pause");
    return 0;
}