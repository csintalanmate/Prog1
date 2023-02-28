#include <stdio.h>

int main()
{
    int osszeg=0;
    int i;
    for (i=1;i<=100;++i)
    {
        osszeg=osszeg+i;
    }
    printf("Az osszeg: %d \n", osszeg);
    return 0;
}