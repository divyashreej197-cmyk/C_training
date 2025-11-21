#include<stdio.h>
void names(char first[],char last[],int sw)
{
    int i=0;
    char full[100];
    while(first[i]!='\0')
    {
        full[i] = first[i];
        i++;
    }
    full[i]=' ';
    i++;
    int j = 0;
    while(last[j]!='\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }
    printf("%s\n",full);
    int len = i+1;
    if(len<sw)
    printf("fits in the screen:");
    else
    printf("does not fits in screen:");
}
void main()
{
    char first[10] = "Raj";
    char last[10] = "Kumar";
    int sw = 11;
    names(first,last,sw);
}