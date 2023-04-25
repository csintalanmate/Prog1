#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MERET 1000

int main()
{
    FILE *fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL)
    {
        printf("Hiba: Nem sikerult megnyitni a fajlt!\n");
        exit(1);
    }
    
    char szam[MERET];
    double osszeg = 0;

    while (fgets(szam, MERET, fp) != NULL)
    {
        szam[1]='.';
        double n=atof(szam);
        osszeg += n;
    }

    fclose(fp);

    printf("A file-ban a szamok osszege: %.20lf\n", osszeg);
    
    return 0;
}