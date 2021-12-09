#include <cstdlib>
#include <cstdio>
#include <iostream>

#define a 5
#define b 10

using namespace std;

int main(){
    int *p,*q;
    if((p=(int*)malloc(sizeof(int)*a))==NULL){
        printf("something got wrong");
        exit(1);
    }
    for(int i=0;i<a;i++){
        p[i]=i;
        printf("%d ",p[i]);
    }
    cout<<endl;
    if((q=(int*)realloc(p,sizeof(int)*b))==NULL){
        printf("something got wrong/realloc");
    }
    for(int i=0;i<b;i++){
        q[i]=i;
        printf("%d ",q[i]);
    }
    free(q);
    system("pause");
}