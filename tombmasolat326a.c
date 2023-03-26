#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int meret;
    printf("Hany db szamot szeretnel bevinni?\n");
    scanf("%d", &meret);
    int tomb[meret+1];
    for (int i=1;i<=meret;++i)
    {
        printf("%d. szam: ", i);
        scanf("%d", &tomb[i]);
    }
    int masolat[meret+1];
    for (int i=1;i<=meret;++i)
    {
        if (tomb[i]<0)
        {
            masolat[i]=-1*tomb[i];
        }
        else
        {
            masolat[i]=tomb[i];
        }
    }
    printf("A bevitt szamok abszolut ertekei: ");
    for (int i=1;i<=meret;++i)
    {
        if (i!=meret)
        {
            printf("%d, ", masolat[i]);
        }
        else
        {
            printf("%d\n", masolat[i]);
        }
    }
    printf("A megadott szamok: ");
    for (int i=1;i<=meret;++i)
    {
        if (i!=meret)
        {
            printf("%d, ", tomb[i]);
        }
        else
        {
            printf("%d\n", tomb[i]);
        }
    }
    


    return 0;
}