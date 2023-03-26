#include "prog1.h"
#include <stdio.h>
#include <string.h>


int main()
{
    string abc[26];
    int meret=26;
    char c=97;
    char space=' ';
    for (int i=0;i<meret;++i)
    {
        abc[i]=c+i;
    }

    for (int i=0;i<meret;++i)
    {
        printf("%c ", abc[i]);
    }
    puts("");


    return 0;
}