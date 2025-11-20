#include <stdio.h>
void main ()
{
    int arr[4] = {45,67,78,89};
    int *p = arr;
    printf("%d",*(p+2));
}