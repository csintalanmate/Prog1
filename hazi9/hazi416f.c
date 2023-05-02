#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(int intmin, int intmax)
{
    int szam = rand();
    szam = szam % (intmax-intmin+1) + intmin;
    return szam;
}

int choice(const int n, const int tomb[])
{
    return tomb[get_random(0, n-1)];
}

int main()
{
    srand(time(NULL));
    
    int szamok[] = {33,69,420,12,5,76,88,94,333,21235,2454364,8767,231};
    int meret = sizeof(szamok) / sizeof(szamok[0]);
    
    printf("Tomb elemei: ");
    for (int i = 0; i < meret-1; i++)
    {
        printf("%d, ", szamok[i]);
    }
    printf("%d\n", szamok[meret-1]);
    
    int rand_elem = choice(meret, szamok);
    printf("A tomb egy veletlenszeru eleme: %d", rand_elem);
    
    return 0;
}