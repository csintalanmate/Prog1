#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc,string argv[])
{
    int szam=argc;

    if (argc!=3)
    {
        printf("Hiba ket szamot kell megadni!\n");
    }
    else
    {
        int n1=atoi(argv[1]);
        int n2=atoi(argv[2]);
        printf("A ket szam osszege: %d+%d=%d\n", n1, n2, n1+n2);
    }
    


    return 0;
}