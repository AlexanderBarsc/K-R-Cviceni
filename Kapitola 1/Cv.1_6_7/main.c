//Cviceni 1.6 Overte zda vyraz getchar() != EOF je roven 1 nebo 0
//Cviceni 1.7 Vypiste hodnotu EOF
#include <stdio.h>

int main()
{
    unsigned char c;

    printf("Value of EOF is %d", EOF);

    while ((c = getchar()) != EOF) // Vyraz vyraz getchar() != EOF je overen v ramci podminky tohoto cyklu                                        // je overen uz v ramci podminky tohoto cyklu
    {
        putchar(c);
    }

    printf("End");

    return 0;
}