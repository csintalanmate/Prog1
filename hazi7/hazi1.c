#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void muveletek(int n, int tomb[])
{
    int min=100;
    int max=0;
    int sum=0;
    float atlag=0;

    for (int i=0;i<n;++i)
    {
        if (tomb[i]<min)
        {
            min=tomb[i];
        }
        if (tomb[i]>max)
        {
            max=tomb[i];
        }
        sum=sum+tomb[i];
    }

    atlag=sum/n;

    printf("A legkisebb érték: %d\n", min);
    printf("A legnagyobb érték: %d\n", max);
    printf("Az elemek átlaga: %f\n", atlag);
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
    muveletek(meret, tomb);


    return 0;
}