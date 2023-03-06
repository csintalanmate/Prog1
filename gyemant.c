#include <stdio.h>

int main()
{
    int sorok;
    printf("Irja be a sorok szamat: ");
    scanf("%d", &sorok);
    while (sorok%2==0 || sorok<0)
    {
        printf("Irja be a sorok szamat: ");
        scanf("%d", &sorok);
    }
    for (int i=1;i<=(sorok/2)+1;++i)
    {
        for (int j=(sorok/2)-i+1;j>=0;j--)
        {
            printf(" ");
        }
        for (int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=sorok/2;i>=0;i--)
    {
        for (int j=0;j<=sorok/2-i+1;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}