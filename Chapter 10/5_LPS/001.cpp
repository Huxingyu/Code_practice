//violent

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int max_num=20;

int main(){
    char str[max_num];
    gets(str);
    int num_len=strlen(str);
    printf("%d\n",num_len);
    for(int i=0;i<num_len;i++){
        for(int j=0;j<num_len;j++){
            if((j-i+1)/2==0){
                //时间复杂度为O(N^3)
            }
        }
    }
    system("pause");
    return 0;
}