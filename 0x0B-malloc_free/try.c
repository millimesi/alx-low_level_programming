#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int **alloc_grid(int width, int height)
{
    int *(arr1)[width];
    arr1 = malloc((width * height)*(sizeof(int)));
    int i, j;
    if (arr1 != NULL)
    {
        for (i =0; i < hieght; i++)
        {
            for (j = 0; j < width; j++)
            {
                arr1[i][j] = 0;
            }
        }
    }
    int **arr2;
    arr2 = malloc((height) * (sizeof(*arr1)))
    for (int l = 0; l < height; l++)
    {
        arr2[i] = arr1[i][0];
    }
    return (arr2);
}
int main(void)
{
    int w;
    int h = 0;
    int **grid = alloc_grid(3, 3);
    while (h < 3)
    {
        w = 0;
        while (w < 3)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}    
