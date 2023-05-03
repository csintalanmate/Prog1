#include <stdio.h>

void kiir(const int n, const int matrix[][n])
{
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<n;++j)
        {
            printf("%d  ", matrix[i][j]);
        }
        puts("");
    }
}

void foatlo(const int n, const int matrix[][n])
{
    for (int i = 0;i < n;++i)
    {
        printf("%d  ", matrix[i][i]);
    }
    puts("");
}

int main()
{
    //int szamok[] = {87, 46, 84, 37, 65};
    //int n = sizeof(szamok) / sizeof(szamok[0]);

    int matrix[][4]=
    {
        {1,2,7,3},
        {1,2,5,7},
        {4,6,8,9},
        {5,2,7,3}
    };
    int n = 4;

    kiir(n,matrix);
    puts("");
    foatlo(n,matrix);

    

    return 0;
}