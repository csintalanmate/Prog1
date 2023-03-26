#include <stdio.h>
#include <string.h>

#define MAX 500
int main() 
{
    char szo[MAX];
    int max_hossz = 0;
    int i=0;

    printf("Adj meg szavakat '*' vegjelig!\n");
    while (1) 
    {
        printf("Szo: ");
        fgets(szo, MAX, stdin);

        if (szo[0] == '*') {
            break;
        }

        int hossz = strlen(szo);
        if (hossz > max_hossz) {
            max_hossz = hossz;
        }
        ++i;
    }

    printf("%d db szot adtal meg. A leghosszabb szo %d karakterbol all.\n", i, max_hossz);

    return 0;
}