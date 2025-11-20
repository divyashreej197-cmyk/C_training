#include <stdio.h>
int search (int arr[],int key,int n)
{
    for(int i = 0; i<n; i++)
    {
      if (arr[i] == key)
      return 1;
    }
    return 0;
}
void main()
{
    int arr[5]={45,76,98,76,56};
    int n = 5;
    int key;
    printf("what are you searching:");
    scanf("%d",&key);
    printf("%d",search(arr,key,n));
}
