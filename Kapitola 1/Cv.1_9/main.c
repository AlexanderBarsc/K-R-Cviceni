//Cviceni 1.9 Napiste program pro kopirovani vstupu na vystup, nahrazujici retezce jedne nebo nekolika mezer jednou mezerou

#include "stdio.h"

int main()
{
    int z;
    int mezeraPovolena;

    mezeraPovolena = 1;

    while((z = getchar()) != EOF)
    {

        if(z == ' ')
        {

            if(!mezeraPovolena)
            {
                continue;
            }

            mezeraPovolena = 0;

        }
        else if(z == '\n')
        {
           mezeraPovolena = 1;
        }
        else
        {
           
        }
        
        putchar(z);

    }

}
    