#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000

int main()
{
    FILE *in = fopen("in.txt", "r");
    FILE *out = fopen("out.txt", "w");
    if (in == NULL)
    {
        printf("Hiba: Nem sikerult megnyitni a fajlt!\n");
        exit(1);
    }
    printf("# in.txt sikeresen megnyitva\n");
    
    char szam[MAX];
    int counter = 0;
    
    printf("# 0,5-nel nagyobb szamok szurese...\n");
    while (fgets(szam,MAX,in) !=NULL)
    {
        double n=atof(szam);
        if (n > 0.5)
        {
            fprintf(out, "%.15lf\n", n);
            counter++;
        }
    }
    printf("# szures vege\n");
    
    fclose(in);
    fclose(out);
    printf("# out.txt bezarva\n");
    
    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", counter);
    
    return 0;
}