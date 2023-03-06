#include <stdio.h>

int main()
{
    int sorok;
    printf("Irja be a sorok szamat: ");
    scanf("%d", &sorok);
    for (int i=1;i<=sorok;++i)
    {
        int teglak=i;
        int szokozok=sorok-teglak;
        for (int j=1;j<=szokozok;++j)
        {
            printf(" ");
        }
        for (int k=1;k<=teglak;++k)
        {
            printf("#");
        }
        printf("  ");
        for (int l=1;l<=i;++l)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}