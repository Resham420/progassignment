#include <stdio.h>
#include <stdlib.h>

int main()
{
   float amount,result ;
   int choice;
   printf ("Enter Amount = ");
   scanf ("%f",&amount);
   printf  ("10- Pound to kilogram \n" );
   printf ("11- Kilogram to Pound \n" );
   printf (" Enter Choice = ");
   scanf ("%f", &choice);
   if (choice==10);
   {
       result = amount/2.205 ;
   }
   if (choice==11);
   {
       result= amount*2.205 ;
   }
   printf (" result= %f", result );
   return 0;
}
