#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 300

typedef struct {
    int alatt;
    int felett;
} Pair;

int get_random_number()
{
    int szam=(rand()%(874-25))+25;
    return szam;
}

void feltolt(const int n, int tomb[])
{
    for (int i=0;i<n;++i)
    {
        tomb[i]=get_random_number();
    }
}

double average(const int n,const int tomb[])
{
    int total=0;
    for (int i=0;i<n;++i)
    {
        total+=tomb[i];
    }
    return (double)total/(double)n;
}

Pair alatt_felett(const int n,const int tomb[])
{
    double avg=average(n, tomb);

    Pair result;
    
    int low=0;
    int high=0;

    for (int i=0;i<n;++i)
    {
        int curr=tomb[i];
        if (curr<avg)
        {
            ++low;
        }
        else
        {
            ++high;
        }
    }

    result.alatt=low;
    result.felett=high;

    return result;
}

int main()
{
    srand(1983);

    int szamok[MAX];
    
    feltolt(MAX, szamok);

    Pair eredmeny= alatt_felett(MAX, szamok);

    printf("Atlag alattiak: %d\n", eredmeny.alatt);
    printf("Atlag felettiek: %d\n", eredmeny.felett);


    return 0;
}