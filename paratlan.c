#include <stdio.h>

int main()
{
    int n;
    printf("Adjon meg egy szamot");
    scanf("%d",&n);
    int i;
    printf("A %d-tol kisebb paratlan szamok: \n");
    for (i=n;i>0;--i)
    {
        if (i%2==1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}