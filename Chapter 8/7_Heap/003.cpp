#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int max_num=100;
int num[max_num],n;

//(low,high)
void up_adjust(int low,int high){
    int i=high,j=i/2;
    while(j>=low){
        if(num[i]>num[j]){
            swap(num[i],num[j]);
            i=j;
            j=j/2;
        }else{
            break;
        }
    }
}

void insert(int x){
    num[++n]=x;
    up_adjust(1,n);
}

//这个与delet一样，都是针对于已经down_adjust调整好
//已经成为完全二叉树的堆，而言的