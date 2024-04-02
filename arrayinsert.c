#include <stdio.h>
#define ARRAYSIZE 10
int main(int argc, char const *argv[])
{
    int a[ARRAYSIZE] = {1,2,3,4,5,6,7,8,9,10};
    int pos = 3;
    int element = 100;

    int b[ARRAYSIZE + 1];
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        b[i] = a[i];
    }
    printf("[");
    for(int i=0;i<ARRAYSIZE+1;i++){
        printf(" %d ",b[i]);
    }
    printf("]\n");
    b[ARRAYSIZE] = element;
    
    

    printf("[");
    for(int i=0;i<ARRAYSIZE+1;i++){
        printf(" %d ",b[i]);
    }
    printf("]\n");
    return 0;
}
