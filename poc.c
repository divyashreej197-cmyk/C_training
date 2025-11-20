// write a c function which will accept one input parameters r and returns the perimeter of circle,declare pi as constant
#include <stdio.h>
float perimeter(int r)
{
    const float pi = 3.14;
    float peri = (2*pi*r);
    return peri;
}
void main ()
{
 int radius = 4;
 printf("%f",perimeter (radius));
}