//1.12 Napiste program vypisujici histogram delek slov na vstupu. Je snadne nakreslit
// histogram horizontalne, vetsi vyzvou je orientovat vystup vertikalne.

#include <stdio.h>

int main()
{

    //Pokud pocitam s tim, ze vstup je v anglictine a nejdelsi slovo ma 35 znaku,
    // tak muzeme vytvorit 2D pole, ktere obsahuje v prvnim sloupci delku daneho slova a v druhem jeho cetnost.
    // Take, nemuze existovat slovo, jenz ma nulovou delku... (nebo muze ? :-)) 
    
    int arr[34] = {0};

    printf("Please enter your sentence: \n");
    int z;
    int counter = 0;

    while((z = getchar()) != EOF)
    {
        if(z == ' ' || z == '\n')
        {
            arr[counter - 1]++;  
            counter = 0;

            if(z == '\n')
            {
                break;
            }

            continue;
        }

        counter++;
    }

    // Vytiskni histogram

    for(int i = 0; i < 34; i++)
    {
        printf("%d:", i + 1);
        
        for(int j = 0; j < arr[i]; j++)
        {
            printf("-");
        }

        printf("\n");
    }
    
}