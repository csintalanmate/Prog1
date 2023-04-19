#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int counter(char c, string s)
{
    int result=0;

    for (int i=0;s[i]!='\0';++i)
    {
        if (s[i] == c)
        {
            ++result;
        }
    }


    return result;
}

void uniq(string input, char output[])
{
    int k=0;
    for (int i=0;input[i]!='\0';++i)
    {
        char c=input[i];
        if (counter(c, input) == 1)
        {
            output[k]=c;
            ++k;
        }
    }
    output[k]='\0';
}

int main()
{
    string s = get_string("Input: ");

    char output[MAX];

    uniq(s, output);

    printf("Output: %s\n", output);


    return 0;
}