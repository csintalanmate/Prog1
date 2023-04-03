#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int n;
    int also_hatar;
    int felso_hatar;

    srand(time(0));
    printf("Hany db random szamot kersz? ");
    scanf("%d", &n);
    int tomb[n];

    printf("Also hatar: ");
    scanf("%d", &also_hatar);

    printf("Felso hatar(zart intervallum): ");
    scanf("%d", &felso_hatar);

    printf("A generalt szamok: ");

    for (int i=0;i<n;++i)
    {
        tomb[i] = (rand() % (felso_hatar-also_hatar+1))+also_hatar;
        for (int j=0;j<n;++j)
        {
            if (tomb[i]==tomb[j] && j!=i)
            {
                srand(time(0));
                tomb[i] = (rand() % (felso_hatar-also_hatar+1))+also_hatar;
            }
        }
        printf("%d ", tomb[i]);
    }
    puts("");


    return 0;
}