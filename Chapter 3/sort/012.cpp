#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>

using namespace std;

struct student{
    char id[15];
    int score;
    int location_number;
    int local_rank;
}stu[100];

bool cmp(student x,student y){
    if(x.score != y.score){
        return x.score>y.score; //从高到底排列
    }
    else{
        return strcmp(x.id,y.id)<0;   //字典序从小到大
    }
}

int main(){
    int n,k,num=0;    //n-考场数,k-考场人数,num-总人数
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",stu[num++].id,stu[num++].score);
            num++;
        }//区间[num-k,num]
        sort(stu+num-k,stu+num,cmp);
        stu[num-k].local_rank=1;
        for(int i=num-k+1;i<num;i++){
            if(stu[i].score==stu[i-1].score){
                stu[i].local_rank=stu[i-1].local_rank;
            }
            else{
                stu[i].local_rank=i+1-(num-k);
            }
        }
    }
    int r=1;
    sort(stu,stu+num,cmp);
    printf("%d\n",num);
    for(int i=0;i<num;i++){
        while( i>0 && (stu[i].score !=stu[i-1].score)){
            r++;    //error
        }
        printf("%s %d %d\n",stu[i].id,r,stu[i].location_number,stu[i].local_rank);
    }
    system("pause");
    return 0;
}