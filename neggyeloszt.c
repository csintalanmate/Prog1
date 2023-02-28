#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &n);
    for (i=1;i<=n;++i)
    {
        if (i%4==0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}