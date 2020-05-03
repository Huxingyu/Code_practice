#include <stdio.h>
#include <stdlib.h>

int find_father(int x,int father[]){
    while(x!=father[x]){
        x=father[x];
    }
    return x;
}

int find_father(int x,int father[]){
    if(x==father[x]){
        return x;
    }
    else{
        return find_father(father[x],father);
    }
}