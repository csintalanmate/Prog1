#include <stdio.h>
#include <string.h>



int main()
{
    char sor[] = "aa bbb cc d";
    char *p;

    p = strtok(sor, " ");

    printf("'%s'\n", p);

    p = strtok(NULL, " ");

    printf("'%s'\n", p);

    p = strtok(NULL, " ");

    printf("'%s'\n", p);
    
    p = strtok(NULL, " ");

    printf("'%s'\n", p);

    p = strtok(NULL, " ");

    printf("%p\n", p);

    return 0;
}