#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_valid(int szamok[6])
{
    int osszeg = 0;
    int szorzat = 1;
    for (int i = 0; i < 6; i++)
    {
        osszeg += szamok[i];
        szorzat *= szamok[i];
    }
    if (osszeg != 90 || szorzat != 996300)
    {
        return 0;
    }
    return 1;
}

void find_numbers(int szamok[6], int min, int max, int k, int index)
{
    if (index == 6)
    {
        if (is_valid(szamok))
        {
            for (int i = 0; i < 6; i++)
            {
                printf("%d ", szamok[i]);
            }
            printf("\n");
        }
        return;
    }
    for (int i = min; i <= max && max - i + 1 >= k - index; i++)
    {
        szamok[index] = i;
        find_numbers(szamok, i + 1, max, k, index + 1);
    }
}

int main()
{
    int szamok[6];

    find_numbers(szamok, 1, 45, 6, 0);

    return 0;
}