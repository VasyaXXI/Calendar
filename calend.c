#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
   int day, month, year, a, b, c, aye; 
   printf("Enter the date with using space "); 
   scanf("%d %d %d",&day, &month, &year); 
   if (day>31 || month>12 || day<1 || month<1 || year<0) 
   { 
     printf("\nIncorrect date\n"); 
     return -1; 
   } 
   else 
   { 
     a = (14-month)/12; 
     b = year - a; 
     c = month + 12 * a -2; 
     aye = (7000+(day+b+b/4-b/100+b/400+(31*c)/12))%7; 
     switch (aye) 
     { 
       case 1: 
          printf("\nMonday"); 
          break; 
       case 2: 
          printf("\nTuesday"); 
          break; 
       case 3: 
          printf("\nWednesday"); 
          break; 
       case 4: 
          printf("\nThursday"); 
          break; 
       case 5: 
         printf("\nFriday"); 
         break; 
       case 6: 
          printf("\nSaturday"); 
          break; 
       case 0: 
          printf("\nSunday"); 
       break; 

     } 
   return 0; 
   } 
}
