#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 500

int jelszo_test(char jelszo[])
{
    int kis=0;
    int nagy=0;
    int szam=0;
    int meret=strlen(jelszo);
    
    
    for (int i=0;i<meret;++i)
    {
        if (islower(jelszo[i]))
        {
            kis=1;
        }
        else if (isupper(jelszo[i]))
        {
            nagy=1;
        }
        else if (isdigit(jelszo[i]))
        {
            szam=1;
        }
    }
    if (meret>=8 && nagy==1 && kis==1 && szam==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() 
{
    char jelszo[MAX];

    printf("Adj meg jelszavakat '*' vegjelig!\n");
    while (1) 
    {
        printf("jelszó: ");
        fgets(jelszo, MAX, stdin);
        jelszo[strlen(jelszo)-1]='\0';

        if (strcmp(jelszo, "*")==0) {
            break;
        }
        
        int megoldas=jelszo_test(jelszo);

        if (megoldas==1)
        {
            printf("Erős jelszó\n");
        }
        else
        {
            printf("Gyenge jelszó\n");
        }
    }

    return 0;
}