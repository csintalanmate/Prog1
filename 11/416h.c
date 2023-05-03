#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int get_number_of_lines(const char * fajlnev)
{
    FILE *fp = fopen(fajlnev, "r");
    int db=0;
    char sor[MAX];

    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! A(z) %s nevu file-t nem sikerult megnyitni!\n", fajlnev);
        exit(1);
    }

    while (fgets(sor, MAX, fp) != NULL)
    {
        db++;
    }
    
    fclose(fp);
    return db;
}

int * fajl_beolvasasa(const int n,const char* fajlnev)
{
    FILE *fp = fopen(fajlnev, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! A(z) %s nevu file-t nem sikerult megnyitni!\n", fajlnev);
        exit(1);
    }
    int *tomb = malloc(n * sizeof(int));
    if (tomb == NULL)
    {
        fprintf(stderr, "Heap error\n");
        exit(1);
    }

    int index = 0;

    char sor[MAX];

    while (fgets(sor, MAX, fp) != NULL)
    {
        int szam = atoi(sor);
        tomb[index] =szam;
        ++index; 
    }

    fclose(fp);

    return tomb;
}


void kiir(const int meret, const int tomb[])
{
    for (int i=0;i<meret;++i)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

void quicksort(int a[], int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = a[(bal + jobb) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            /* */
            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(a, bal, j);
    if (i < jobb) quicksort(a, i, jobb);
}

int main()
{
    const char* nev = "rovid.txt";


    int sorok_szama = get_number_of_lines(nev);
    printf("%d\n", sorok_szama);

    int *tomb = fajl_beolvasasa(sorok_szama,nev);

    kiir(sorok_szama, tomb);

    quicksort(tomb, 0, sorok_szama-1);

    kiir(sorok_szama, tomb);

    free(tomb);

    
    return 0;
}