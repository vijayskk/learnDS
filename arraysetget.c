#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 10;
    int a[n];
    printf("[");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("]\n");
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("[");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("]\n");
    return 0;
}
