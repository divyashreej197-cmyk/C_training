#include <stdio.h>
void main ()
{
    int a = 50;
    int *p = &a;
    printf("a value of %d\n",a);
    printf("a address is %p\n",p);
    printf("a pointers to %p\n",*p);
}