#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    printf("Adj meg 0 vegjelig egesz szamokat az [1, 99] intervallumbol!\n");
    int elemek[100]={0};
    int n;
    do
    {
        printf("Szam: ");
        scanf("%d", &n);
        if (n<0 || n>99)
        {
            printf("Ez a szam kivul esik az elfogadhato intervallumon!\n");
        }
        for (int i=1;i<=99;++i)
        {
            if (n==i)
            {
                elemek[i]++;
            }
        }
    } while (n!=0);
    int kulonbozo=0;
    for (int i=1;i<=99;++i)
    {
        if (elemek[i]>0)
        {
            kulonbozo++;
        }
    }
    printf("%d db kulonbozo szam lett megadva!\n", kulonbozo);
    printf("Ezek (novekvo sorrendben): ");
    for (int i=1;i<=99;++i)
    {
        if (elemek[i]>0)
        {
            printf("%d, ", i);
        }
    }
    puts("");

    return 0;
}