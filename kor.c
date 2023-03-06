#include <stdio.h>
#include <math.h>

double kork(double r)
{
    double k;
    k=2*r*M_PI;
    return k;
}

double kort(double r)
{
    double t;
    t=r*r*M_PI;
    return t;
}


int main()
{
    double kerulet;
    double terulet;
    double rad;
    printf("Add meg a kor sugarat: ");
    scanf("%lf", &rad);
    kerulet=kork(rad);
    printf("A kerulet= %lf\n", kerulet);
    terulet=kort(rad);
    printf("A terulet= %lf\n", terulet);

    return 0;
}