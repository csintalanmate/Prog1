#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 500

int main()
{
    char bazinagy[MAX];
    int osszeg=0;

    printf("Szám: ");
    fgets(bazinagy,MAX,stdin);

    bazinagy[strlen(bazinagy)-1]='\0';

    int meret=strlen(bazinagy);

    for (int i=0;i<meret;++i)
    {
        osszeg=osszeg+(bazinagy[i]-48);
    }
    printf("A számjegyek összege: %d\n", osszeg);

    return 0;
}