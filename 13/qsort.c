#include <stdio.h>
#include <stdlib.h>

/*
    -ha bal < jobb akkor negativ
    -ha bal == jobb akkor nulla
    -ha bal > jobb akkor pozitiv
*/

int cmp(const void *bal, const void *jobb)
{
    const int *a = bal;
    const int *b = jobb;

    return *a - *b;    
}

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int main()
{
    int szamok[] = {88, 56, 100, 2, 25};
    int meret = 5;

    qsort(szamok, meret, sizeof(int), cmp);

    kiir(meret, szamok);

    return 0;
}