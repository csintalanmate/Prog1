#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int negyzet_osszeg(int n)
{
    int osszeg=0;
    for (int i=1;i<=n;++i)
    {
        osszeg=osszeg+(i*i);
    }

    return osszeg;
}

int osszeg_negyzet(int n)
{
    int osszeg=0;
    for (int i=0;i<=n;++i)
    {
        osszeg=osszeg+i;
    }
    return osszeg*osszeg;
}

int main()
{
    int n=100;
    printf("A négyzetösszeg: %d\n", negyzet_osszeg(n));
    printf("Az összeg négyzete: %d\n", osszeg_negyzet(n));
    printf("A kettő különbsége: %d\n", osszeg_negyzet(n)-negyzet_osszeg(n));

    return 0;
}