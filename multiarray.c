#include <stdio.h>
void main()
{
    int arr[2][3] = {{2,4,3},{1,7,4}};
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}