#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void capitalize(char s[])
{
    int hossz = strlen(s);

    if (hossz == 0)
    {
        return;
    }

    s[0] = toupper(s[0]);

    for (int i = 1;i < hossz;++i)
    {
        s[i] = tolower(s[i]);
    }
}

int strcmpi(const char* s1, const char* s2)
{
    char *elso = strdup(s1);
    char *masodik = strdup(s2);

    capitalize(elso);
    capitalize(masodik);
    
    int result = strcmp(elso, masodik);

    return result;
}

int main()
{
    char* s1 = "abcdef";
    char* s2 = "ABCDEF";
    char* s3 = "AbcDEf";
    char* s4 = "AbcDe";
    
    if (strcmpi(s1, s2) == 0)
    {
        printf("s1, s2: megegyezik\n");
    }
    else
    {
        printf("s1, s2: nem egyezik meg\n");
    }

    if (strcmpi(s1, s3) == 0)
    {
        printf("s1, s3: megegyezik\n");
    }
    else
    {
        printf("s1, s3: nem egyezik meg\n");
    }

    if (strcmpi(s1, s4) == 0)
    {
        printf("s1, s4: megegyezik\n");
    }
    else
    {
        printf("s1, s4: nem egyezik meg\n");
    }
    
    return 0;
}