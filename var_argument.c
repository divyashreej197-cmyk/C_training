#include<stdio.h>
#include<stdarg.h>
void add(int result,...)
{
    va_list list;
    va_start (list,result);
    for(int i=1;i<=result;i++)
    {
        int n=va_arg(list,int);
        result = result + n;
    }
    va_end(list);
    printf("%d",result);
}
    void main()
    {
        add(1,2,3,4,5);
    }
