#include<stdio.h>
#include<string.h>
void main()
{
    char name [5] ="DIVYA";
    char new [100] ="hello";
    printf("%c\n",name[5]);
    printf("length of string is %d\n",strlen(name));
    strcat(new,name);
    printf("%s",new);
}