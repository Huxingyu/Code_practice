#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max 100

using namespace std;

struct point{
    int x,y;
}num[max];

bool cmp(point a,point b){
    return a.x<b.x;
}

int main(){
    int n,sum=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&num[i].x,&num[i].y);
    }
    sort(num,num+n,cmp);
    int temp=num[0].y;
    for(int i=1;i<n;i++){       //重写一下，很有意思
        if(num[i].x>=temp){
            temp=num[i].y;
            sum++;
        }
    }
    printf("%d\n",sum);

    system("pause");
    return 0;
}

    // for(int i=0;i<n;i++){
    //     printf("(%d,%d)",num[i].x,num[i].y);
    // }
    // printf("\n");
    // sort(num,num+n,cmp);
    // for(int i=0;i<n;i++){
    //     printf("(%d,%d)",num[i].x,num[i].y);
    // }
    