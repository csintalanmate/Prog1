#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int min;
    int max;
    float atlag;
} Muveletek;

Muveletek muveletek(int n, int tomb[])
{
    Muveletek tmp={100,0,0};
    int sum=0;

    for (int i=0;i<n;++i)
    {
        if (tomb[i]<tmp.min)
        {
            tmp.min=tomb[i];
        }
        if (tomb[i]>tmp.max)
        {
            tmp.max=tomb[i];
        }
        sum=sum+tomb[i];
    }

    tmp.atlag=sum/n;

    return tmp;
}

int main()
{
    int tomb[10];
    int meret=10;
    printf("A tomb elemei: ");
    for (int i =0;i<meret;++i)
    {
        tomb[i]=(rand()%(99-10+1))+10;
        if (i==meret-1)
        {
            printf("%d ", tomb[i]);
        }
        else
        {
            printf("%d, ", tomb[i]);
        }
    }
    puts("");
    Muveletek megoldas = muveletek(meret, tomb);

    printf("A legkisebb érték: %d\n", megoldas.min);
    printf("A legnagyobb érték: %d\n", megoldas.max);
    printf("Az elemek átlaga: %f\n", megoldas.atlag);


    return 0;
}