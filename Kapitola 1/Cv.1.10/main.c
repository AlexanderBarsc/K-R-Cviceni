// Cviceni 1.10
// Napiste program pro kopirovani vstupu na vystup, nahrazujici kazdy tabulator znaky \t, 
// kazdy krok zpatky znaky \b a kazde zpetne lomitko znaky \\. 
// Tim budou znaky pro tabulator a krok zpět prezentovany nezaměnitelným způsobem


#include "stdio.h"

int main()
{
    int z;
    int mezeraPovolena;

    mezeraPovolena = 1;

    while((z = getchar()) != EOF)
    {

        if(z == '\t')
        {
            printf("\\t");
            continue;
        }
        else if(z == '\b')
        {
            printf("\\b");
            continue;
        }
        else if(z == '\\')
        {
            printf("\\");
            continue;
        }
        putchar(z);

    }

}
    