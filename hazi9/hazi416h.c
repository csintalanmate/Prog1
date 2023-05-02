#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

void rendez(const int n, int tomb[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tomb[j] > tomb[j+1])
            {
                int tmp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = tmp;
            }
        }
    }
}

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        exit(1);
    }
    
    char* nev = argv[1];
    FILE *in = fopen(nev, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Hiba! A(z) %s nevu file-t nem sikerult megnyitni!\n", nev);
        exit(2);
    }

    char sor[MAX];
    int szamok[1000];
    int aktualis = 0;
    while (fgets(sor, MAX, in) != NULL)
    {
        sor[strlen(sor)-1] = '\0';
        szamok[aktualis] = atoi(sor);
        aktualis++;
    }
    fclose(in);

    rendez(aktualis, szamok);

    for (int i = 0; i < aktualis; i++)
    {
        printf("%d ", szamok[i]);
    }

    puts("");
    
    return 0;
}