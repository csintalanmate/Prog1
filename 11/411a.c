#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define SPECIAL ".,;'"

int get_random(int intmin, int intmax)
{
    return rand() % (intmax-intmin+1) + intmin;
}

int main()
{
    srand(time(NULL));
    
    int meret = strlen(SPECIAL);
    
    int min_hossz = 8;
    int max_hossz = 12;
    int jelszo_hossz;
    char jelszo[max_hossz + 1];
    int fajta, elozo = -1;
    int kisbetu = 0;
    int nagybetu = 0;
    int szam = 0;
    int specialis = 0;
    int i;
    
    do
    {
        jelszo_hossz = get_random(min_hossz, max_hossz);
        for (i = 0; i < jelszo_hossz; i++)
        {
            while (fajta == elozo)
            {
                fajta = get_random(0,3);
            }
            switch (fajta)
            {
                case 0: 
                    jelszo[i] = 'a' + get_random(0,25);
                    kisbetu = 1;
                    break;
                case 1: 
                    jelszo[i] = 'A' + get_random(0,25);
                    nagybetu = 1;
                    break;
                case 2: 
                    jelszo[i] = '0' + get_random(0,9);
                    szam = 1;
                    break;
                case 3: 
                    jelszo[i] = SPECIAL[get_random(0,meret-1)];
                    specialis = 1;
                    break;
            }
            elozo = fajta;
        }
        jelszo[i] = '\0';
    } while (!(jelszo_hossz >= min_hossz && jelszo_hossz <= max_hossz &&
               kisbetu && nagybetu && szam && specialis) );
    
    printf("%s\n", jelszo);
    
    return 0;
}