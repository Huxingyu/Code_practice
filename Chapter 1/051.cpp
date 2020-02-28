//分别用puts和printf输出字符数组'hu xing yu'

//.1

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20]={};
    // for(int i=0;i<10;i++){
    //     scanf("%c",&str[i]);
    // }
    // printf("%s\n",str);
    gets(str);
    puts(str);
    system("pause");
    return 0;
}