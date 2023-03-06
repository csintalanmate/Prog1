#include <stdio.h>
#include <math.h>

double gombf(double r)
{
    double k;
    k=4*r*r*M_PI;
    return k;
}

double gombt(double r)
{
    double t;
    t=(4*r*r*r*M_PI)/3;
    return t;
}


int main()
{
    double felszin;
    double terfogat;
    double rad;
    printf("Add meg a kor sugarat: ");
    scanf("%lf", &rad);
    felszin=gombf(rad);
    printf("A kerulet= %lf\n", felszin);
    terfogat=gombt(rad);
    printf("A terulet= %lf\n", terfogat);

    return 0;
}