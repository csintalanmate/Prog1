#include <stdio.h>

int main()
{
    int osszeg=0;
    int szam;
    printf("Egesz szam(0 vegjelig):");
    scanf("%d", &szam);
    osszeg=osszeg+szam;
    while (szam!=0)
    {
        printf("Egesz szam(0 vegjelig):");
        scanf("%d", &szam);
        osszeg=osszeg+szam;
    }
    printf("A szamok osszege: %d\n", osszeg);
    return 0;
}