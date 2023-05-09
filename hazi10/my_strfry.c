#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void my_strfry(char *s)
{
    int hossz = strlen(s);
    for (int i = 0; i < hossz - 1; i++)
    {
        int meret = hossz -i;
        int j = i + rand() % meret;
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

int main()
{
    srand(time(NULL));
    
    char szo[] = "CsintalanMate";

    my_strfry(szo);
    printf("%s\n", szo);

    return 0;
}