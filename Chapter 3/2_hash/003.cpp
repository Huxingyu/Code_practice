#include <stdio.h>
#include <stdlib.h>

#define max 26*26*26+10

int num[max];

int hash_change(char x[],int n){
    int id=0;
    for(int i=0;i<n;i++){
        id = id*26+(x[i]-'A');
    }
    return id;
}

int main(){
    system("pause");
    return 0;
}

//练手