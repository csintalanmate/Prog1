#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Adjon meg egy pozitiv egesz szamot: ");
    scanf("%d", &n1);
    printf("Adjon meg egy pozitiv egesz szamot: ");
    scanf("%d", &n2);
    if (n1<n2)
    {
        printf("%d < %d",n1,n2);
    }
    else if (n1>n2)
    {
        printf("%d > %d",n1,n2);
    }
    else
    {
        printf("%d = %d",n1,n2);
    }
    return 0;
}