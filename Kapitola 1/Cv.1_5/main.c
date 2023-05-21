//Cviceni 1.5 Upravta program pro konverzi teplot tak, aby tiskl tabulku v opacnem poradi, tj od 300 stupnu do 0

#include <stdio.h>

int main(int argc, char const *argv[])
{
   float fahr, celsius;
   int dolni, horni, krok;

   dolni = 0;
   horni = 300;
   krok = 20;

   printf("Celsius, Fahrenheit \n");

   celsius = horni;
   while(celsius >= dolni)
   {
    fahr = ((float)9/5)*celsius + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius -= krok;

   }
        
    getchar();  

}
