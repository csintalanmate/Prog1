#include <stdio.h>
#include <stdlib.h>

void mellekatlo_elemek(int n, int matrix[n][n])
{
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d\n", matrix[n-1 - i][i]);
    }
}
int main()
{
    int n = 6;
    int matrix[6][6] = {
    {3,5,1,21,55,9},
    {25,77,88,1,66,3},
    {7,8,44,53,67,8},
    {54,77,78,3,7,9},
    {11,26,96,2,9,65},
    {76,32,55,97,32,1}
    };

    mellekatlo_elemek(n, matrix);
    
    return 0;
}