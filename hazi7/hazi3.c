#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2)
{
    int x=abs(p1.x-p2.x);
    int y=abs(p1.y-p2.y);

    double tavolsag=sqrt(x*x+y*y);

    return tavolsag;
}

int main()
{
    Pont a = { 1, 2 };
    Pont b = { 6, 5 };

    printf("A két pont közti távolság: %lf\n", distance(a, b));

    return 0;
}