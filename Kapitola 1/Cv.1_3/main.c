//Cviceni 1.3 Upravte program pro konverzi teplot tak, aby vypisoval nad tabulkou nadpis.

#include <stdio.h>

int main(int argc, char const *argv[])
{
   float fahr, celsius;
   int dolni, horni, krok;

   dolni = 0;
   horni = 300;
   krok = 20;

   printf("Fahrenteit, Celsius \n");

   fahr = dolni;
   while(fahr <= horni)
   {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + krok;

   }
        
    getchar();  

}
