#include <stdio.h>
int volume_of_cube(int l,int b,int h)
{
    int prod = l*b*h;
    return prod;
}
void main()
{
    int l=5,b=4,h=3;
    printf("%d\n",volume_of_cube(l,b,h));
}
