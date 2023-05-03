#include <stdio.h>

void kiir(const int sorok, const int oszlopok, const int matrix[][oszlopok])
{
    for (int i=0;i<sorok;++i)
    {
        for (int j=0;j<oszlopok;++j)
        {
            printf("%d  ", matrix[i][j]);
        }
        puts("");
    }
}

int get_matrix_osszeg(const int sorok, const int oszlopok, const int matrix[][oszlopok])
{
    int osszeg = 0;
    
    for (int i=0;i<sorok;++i)
    {
        for (int j=0;j<oszlopok;++j)
        {
            osszeg += matrix[i][j];
        }
    }

    return osszeg;
}


int main()
{
    int szamok[] = {87, 46, 84, 37, 65};
    int n = sizeof(szamok) / sizeof(szamok[0]);

    int matrix[][6]=
    {
        {1,2,7,3,4,8},
        {1,2,5,7,4,6},
        {4,6,8,9,3,2},
        {5,2,7,3,1,5}
    };
    int sorok = 4;
    int oszlopok = 6;

    kiir(sorok,oszlopok,matrix);

    int osszeg = get_matrix_osszeg(sorok,oszlopok,matrix);

    printf("Osszeg: %d\n", osszeg);

    return 0;
}