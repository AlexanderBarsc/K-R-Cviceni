//Cviceni 1.8 Napiste program pocitajici mezery, tabulatory a znaky pro novy radek

#include "stdio.h"

int main()
{
    int z;
    int mezera, tabulator, znak;

    mezera = 0;
    tabulator = 0;
    znak = 0;

    while((z = getchar()) != EOF)
    {

        if(z == ' ')
        {
            mezera++;
        }
        else if(z == '\t')
        {
            tabulator++;
        }
        else if(z == '\n')
        {
            printf("Tento radek ma %d mezer, %d tabulatoru, %d znaku \n", mezera, tabulator, znak);

            mezera = 0;
            tabulator = 0;
            znak = 0;
        }
        else // TODO - poresit zda vsechno ostatni se ma brat jako znak
        {
            znak++;
        }

    }

}
    