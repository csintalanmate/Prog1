#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(int intmin, int intmax)
{
    return rand() % (intmax-intmin+1) + intmin;
}

void shuffle(int n, int tomb[])
{
    for (int i = n-1; i > 0; i--)
    {
        int j = get_random(0,i);
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
    }
}

int main()
{
    srand(time(NULL));

    int szamok[] = {1,2,3,4,5,6,7,8,9,10};
    int meret = sizeof(szamok) / sizeof(szamok[0]);
    printf("Tomb elemei: ");
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", szamok[i]);
    }

    puts("");

    shuffle(meret, szamok);

    printf("Keveres utan: ");
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", szamok[i]);
    }

    return 0;
}