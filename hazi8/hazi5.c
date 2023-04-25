#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_valid_c_identifier(const char* input) 
{
    if (isalpha(input[0])==0 && input[0] != '_') 
    {
        return 0;
    }
    for (int i = 1; i < strlen(input); i++) 
    {
        if (isalnum(input[i])==0 && input[i] != '_') 
        {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    printf("Adj meg sztringeket '*' végjelig!\n");
    char input[100];
    while (1) 
    {
        printf("Input: ");
        fgets(input,100,stdin);
        input[strlen(input)-1]='\0';
        if (strcmp(input,"*")==0) 
        {
            break;
        }
        if (is_valid_c_identifier(input)==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}