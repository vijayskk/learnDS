#include <stdio.h>
#define TARGET 6
#define ARRSIZE 11

int main(int argc, char const *argv[])
{
    int arr[ARRSIZE] = {6, 1, 6, 8, 10, 4, 15, 6, 3, 9, 6};

    int arr2[ARRSIZE];

    int index = 0;
    int count = 0;
    for (int i = 0; i < ARRSIZE; i++)
    {
        if (arr[i] != TARGET)
        {
            arr2[index] = arr[i];
            index++;
        }
        else
        {
            count++;
        }
    }

    for (int j = 0; j < count; j++)
    {
        arr2[index] = 6;
        index++;
    }

    printf("[");
    for(int i=0;i<ARRSIZE;i++){
        printf(" %d ",arr2[i]);
    }
    printf("]\n");
    return 0;
}
