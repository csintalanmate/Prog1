#include <stdio.h>

int main()
{
    int pozitiv=0;
    int negativ=0;
    int szam;
    printf("Egesz szam(0 vegjelig):");
    scanf("%d", &szam);
    if (szam>0)
    {
        pozitiv=pozitiv+1;
    }
    else if(szam<0)
    {
        negativ=negativ+1;
    }
    while (szam!=0)
    {
        printf("Egesz szam(0 vegjelig):");
        scanf("%d", &szam);
        if (szam>0)
        {
            pozitiv=pozitiv+1;
        }
        else if(szam<0)
        {
            negativ=negativ+1;
        }
    }

    printf("A pozitiv szamok szama: %d\n", pozitiv);
    printf("A negativ szamok szama: %d\n", negativ);
    return 0;
}