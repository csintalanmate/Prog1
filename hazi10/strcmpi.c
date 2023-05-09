#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int strcmpi(const char* s1, const char* s2)
{
    int length = strlen(s1);
    for (int i = 0; i < length; i++)
    {
        if (toupper(s1[i]) != toupper(s2[i]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char* s1 = "abcdef";
    char* s2 = "ABCDEF";
    char* s3 = "AbcDEf";
    char* s4 = "AbcDe";
    
    if (strcmpi(s1, s2))
    {
        printf("s1, s2: megegyezik\n");
    }
    else
    {
        printf("s1, s2: nem egyezik meg\n");
    }

    if (strcmpi(s1, s3))
    {
        printf("s1, s3: megegyezik\n");
    }
    else
    {
        printf("s1, s3: nem egyezik meg\n");
    }

    if (strcmpi(s1, s4))
    {
        printf("s1, s4: megegyezik\n");
    }
    else
    {
        printf("s1, s4: nem egyezik meg\n");
    }
    
    return 0;
}