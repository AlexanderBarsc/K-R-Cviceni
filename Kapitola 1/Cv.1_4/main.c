//Cviceni 1.4 Napiste program, ktery vypise odpovidajici tabulku pro prevod ze stupnu Celsia na Fahrenheita.

#include <stdio.h>

int main(int argc, char const *argv[])
{
   float fahr, celsius;
   int dolni, horni, krok;

   dolni = 20;
   horni = 300;
   krok = 20;

   printf("Celsius, Fahrenheit \n");

   celsius = dolni;
   while(celsius <= horni)
   {
    fahr = ((float)9/5)*celsius + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += krok;

   }
        
    getchar();  

}
