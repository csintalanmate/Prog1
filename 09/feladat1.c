#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_in(char c, string s)
{
    for (int i=0;s[i]!='\0';++i)
    {
        if (s[i]==c)
        {
            return 1;
        }
    }
    return 0;
}

void filter(string s1, string s2)
{
    putchar('"');
    for (int i=0;s1[i]!='\0';++i)
    {
        char c = s1[i];
        if (is_in(c, s2))
        {
            putchar(c);
        }
    }
    putchar('"');
    putchar('\n');
}

int main(int argc, string argv[])
{
    if (argc!=3)
    {
        printf("Hiba! Adj meg pontosan 2 db paramétert!\n");
        exit(1);
    }

    filter(argv[1],argv[2]);

    return 0;
}