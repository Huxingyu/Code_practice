#include <stdio.h>
#include <stdlib.h>

int num[13][2]={
    {0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
    };
bool isleap(int n){
    return( n%4==0 && n%100 !=0) || ( n%400 == 0);
    //这儿涉及符号优先级的一些问题，多加注意
    //https://stackoverflow.com/questions/12745601/expression-must-be-a-modifiable-lvalue
}
int main(){
    int i=1;    //error
    int d1,m1,y1,date1;
    int d2,m2,y2,date2;
    scanf("%d %d",&date1,&date2);
    if(date1>date2){
        int temp=date1;
        date1 = date2;
        date2 = temp;
    }
    y1=date1/10000,m1=date1%10000/100,d1=date1%100;
    y2=date2/10000,m2=date2%10000/100,d2=date2%100;
    while(y1<y2 || m1<m2 ||d1<d2){
        d1++;
        if(d1==num[m1][isleap(y1+1)]){  //error
            m1++;
            d1=1;   //error
        }
        if(m1==13){
            y1++;
            m1=1;   //error
        }
        i++;
    }
    printf("%d",i);
    system("pause");
    return 0;
}

//日期间隔算法