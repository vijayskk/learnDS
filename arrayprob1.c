#include "stdio.h"
#define ARRSIZE 7
#define TARGET 10
int main(int argc, char const *argv[])
{
    int arr[ARRSIZE] ={6,5,4,3,9,8,0};
    for (int i = 0; i < ARRSIZE; i++)
    {
        for (int j = 0; j < ARRSIZE; j++)
        {
            if (arr[i] + arr[j] == TARGET && i!=j)
            {
                printf("%d,%d\n",i,j);
                break;
            }
            
        }
        
    }
    
    return 0;
}
