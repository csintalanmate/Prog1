#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
#define SOR 1000

int strcmpi(const char* s1, const char* s2)
{
    int length = strlen(s1);
    for (int i = 0; i < length; i++)
    {
        if (toupper(s1[i]) != toupper(s2[i]))
        {
            return 0;
        }
    }
    return 1;
}

typedef struct {
    char nev[25];
    int kor;
    char szak[25];
} Tanulo;

int main()
{
    char* fajlnev = "nevek.csv";

    FILE *in = fopen(fajlnev, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Hiba! Nem lehet megnyitni a(z) %s nevu fajlt\n", fajlnev);
        exit(1);
    }

    char sor[SOR];
    Tanulo tanulok[MAX];
    int aktualis = 0;
    while (fgets(sor, SOR, in) != NULL)
    {
        char *p;
        p = strtok(sor, ",");
        strcpy(tanulok[aktualis].nev, p);
        p = strtok(NULL, ",");
        tanulok[aktualis].kor = atoi(p);
        p = strtok(NULL, ",");
        strcpy(tanulok[aktualis].szak, p);

        for (int i = 0;i < 3;++i)
        {
            tanulok[aktualis].szak[i] = tolower(tanulok[aktualis].szak[i]);
        }

        if (strcmpi(tanulok[aktualis].szak, "PTI") == 1)
        {
            aktualis++;
        }
    }
    printf("%d\n", aktualis);

    fclose(in);

    for (int i = 0; i < aktualis - 1; i++)
    {
        for (int j = i + 1; j < aktualis; j++)
        {
            if (strcmp(tanulok[i].nev, tanulok[j].nev) > 0)
            {
                Tanulo temp = tanulok[i];
                tanulok[i] = tanulok[j];
                tanulok[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < aktualis; i++)
    {
        printf("%s\n", tanulok[i].nev);
    }

    return 0;
}
