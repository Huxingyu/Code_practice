#include <stdio.h>
#include <stdlib.h>

int month[13][2]={
    (0,0),(31,31),(28,29),(31,31),(30,30),(31,31),(30,30),(31,31),(31,31),(30,30),(31,31),(30,30),(31,31)
    };

bool isit(int x){
    return (x%4==0 && x%100!=0)||(x%400==0);
}
int main(){
    int days=1;
    int day1,mon1,year1,num1;
    int day2,mon2,year2,num2;    //20130101
    scanf("%d %d",&num1,&num2);
    year1=num1/10000,mon1=num1%10000/100,day1=num1%100;
    year2=num2/10000,mon2=num2%10000/100,day2=num2%100;
    while(year1<year2 || mon1<mon2 || day1<day2){
            day1++;
            if(day1==month[mon1][isit(year1)]+1){
                mon1++;
                day1=1;
            }
            if(mon1==13){
                year1++;
                mon1=1;
            }
            days++;
        }
    printf("%d\n",days);
    system("pause");
    return 0;
}

//死循环：while处