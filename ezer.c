#include <stdio.h>

int main()
{
    int osszeg=0;
    int i;
    for (i=1;i<1000;++i)
    {
        if (i%3==0 || i%5==0)
        {
            osszeg=osszeg+i;
        }
    }
    printf("Az osszeg: %d \n", osszeg);
    return 0;
}