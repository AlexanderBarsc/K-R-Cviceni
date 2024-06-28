//1.14 Napiste program vypisujici histogram frekvenci ruznych znaku na vstupu

#define ASCII_OFFSET 33
#include <stdio.h>

int main()
{
 
    int arr[256 - ASCII_OFFSET] = {0};

    printf("Please enter your sentence: \n");
    int z;
    int counter = 0;

    while((z = getchar()) != EOF)
    {
        if(z == '\n')
        {
            break;
        }

        if(z >= ASCII_OFFSET)
        {
            arr[z - ASCII_OFFSET]++;
        }

        counter++;
    }

    // Vytiskni histogram

    for(int i = 0; i < (256 - ASCII_OFFSET); i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }

        printf("%c:", i + ASCII_OFFSET);
        
        for(int j = 0; j < arr[i]; j++)
        {
            printf("-");
        }

        printf("\n");
    }
    
}

