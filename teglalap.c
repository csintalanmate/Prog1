#include <stdio.h>

int main()
{
    int a;
    printf("Kerem add meg a teglalap egyik oldalat \n");
    scanf("%d", &a);
    int b;
    printf("Kerem add meg a teglalap masik oldalat \n");
    scanf("%d", &b);
    printf("A teglalap kerulete= %d \n", 2*(a+b));
    printf("A teglalap terulete= %d \n", a*b);
    
    return 0;
}
