#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    clock_t tStart = clock();
    int i=10000;
    while (i--)
    {
        printf("shuaishuaishuai\n");
    }
    
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    system("pause");
    return 0;
}