#include <stdio.h>

int teglalapk(int a,int b)
{
    int k;
    k=2*(a+b);
    return k;
}

int teglalapt(int a,int b)
{
    int t;
    t=a*b;
    return t;
}


int main()
{
    int kerulet;
    int terulet;
    int o1;
    int o2;
    printf("Add meg az egyik oldalt: ");
    scanf("%d", &o1);
    printf("Add meg a masik oldalt: ");
    scanf("%d", &o2);
    kerulet=teglalapk(o1,o2);
    printf("A kerulet= %d\n", kerulet);
    terulet=teglalapt(o1,o2);
    printf("A terulet= %d\n", terulet);

    return 0;
}