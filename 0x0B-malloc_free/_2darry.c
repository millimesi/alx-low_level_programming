#include <stdio.h>
int main(void)
{
    int i, j;
    int arr[2][3] = {1,0,9,2,8,3};
    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return (0);
}