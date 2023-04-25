#include <stdio.h>
#include <string.h>

#define MAX 1000

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) 
    {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 2;
    }

    char sor[MAX];
    int db = 0;

    while (fgets(sor, MAX, fp) != NULL)
    {
        sor[strlen(sor)-1] = '\0';
        printf("%s\n", sor);
        db++;
    }

    fclose(fp);

    printf("Sorok szama: %d\n", db);
    
    return 0;
}