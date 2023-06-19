#include "stdio.h"
int main (void)
{
    int arr[2][3] = {{100}, {50}};
    printf("%d", *(arr[1]));
    return (0);
}