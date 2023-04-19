#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 200

typedef char * string;

int https(string s)
{
    if (strlen(s)<8)
    {
        return 0;
    }
    return s[0]=='h' && s[1]=='t' && s[2]=='t' && s[3]=='p' && s[4]=='s' && s[5]==':' && s[6]=='/' && s[7]=='/';
}

int main()
{
    char input[MAX];

    int counter=0;

    while(1)
    {
        printf("Az URL (vege: q): ");
        fgets(input,MAX,stdin);
        input[strlen(input)-1]='\0';

        if(strcmp(input, "q")==0)
        {
            break;
        }

        if (https(input)==1)
        {
            ++counter;
        }
    }
    
    printf("HTTPS protokollt hazsnalo URL-ek szama: %d\n", counter);


    return 0;
}