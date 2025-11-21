#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p = (float*)calloc(4,sizeof(float));
    p[0]=450.90;
    p[1]=900.87;
    p[2]=660.56;
    p[3]=320.34;
    printf("%f",p[0]);
}