#include <stdio.h>
int myadd("int a,int b");
{
    int sum = a+b;
    return sum;
}
void main ()
{
    int a = 45;b = 30;
    printf("%d",myadd(a,b));
}