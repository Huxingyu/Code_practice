#include <stdio.h>
#include <stdlib.h>

void sort(int x,int y[]){
    int j,temp;
    for(int i=1;i<x;i++){
        j=i;
        temp=y[i];
        while( temp<y[j-1] && j>=1){
            y[j]=y[j-1];
            j--;
        }
        y[j]=temp;      //remenber
    }
}

int main(){
    int y[]={5,4,3,2,1};
    int x=sizeof(y)/4;
    sort(x,y);
    for(int i=0;i<x;i++){
        printf("%d\n",y[i]);
    }
    system("pause");
    return 0;
}

//插入排序