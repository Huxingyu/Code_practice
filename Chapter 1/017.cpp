#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
    int a;
    char b,c[10];
    scanf("%d%c%s",&a,&b,&c);
    printf("%d%c%s\n",a,b,c);       //scanf function is complex
    system("pause");
    return 0;
}