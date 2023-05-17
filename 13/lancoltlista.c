#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    Verem megvalósítása láncolt listával
    A fej mutat a verem tetejére
*/

typedef struct listaelem{
    int adat;
    struct listaelem *kov;
} LISTAELEM;

LISTAELEM *fej = NULL;

bool ures()
{
    return fej == NULL;
}

void push(int ertek)
{
    LISTAELEM *uj = malloc(sizeof(LISTAELEM));
    uj->adat = ertek;
    uj->kov = fej;
    fej = uj;
}

int pop()
{
    if(ures())
    {
        hiba("Ures a verem!");
    }
    else
    {
        int ertek = fej->adat;

        LISTAELEM *masodik = fej->kov;
        free(fej);
        fej = masodik;

        return ertek;
    }

}

void bejar()
{
    LISTAELEM *akt = fej;
    while(akt != NULL)
    {
        printf("%d ", akt->adat);
        akt = akt->kov;
    }
}

int main()
{
    

    return 0;
}