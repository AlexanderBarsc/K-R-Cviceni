//1.12 Napiste program, ktery vypise vstup na vystup po jednom slovu na radek

#include <stdio.h>

int main()
{
    int z;
    while((z = getchar()) != EOF)
    {
        if(z == ' ')
        {
            putchar('\n');
            continue;
        }
        putchar(z);


    }
}