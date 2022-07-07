//Program which takes the Month Number as an input and display number of Days in that Month

#include<stdio.h>
#include<conio.h>
int main()
{
   int num;
   while(1)
   {
      printf("\n\nEnter the month number\n");
      scanf("%d",&num);
      switch(num)
      {
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12:

            printf("31 Days");
            break;
        
         case 2:

            printf("28 or 29 Days");
            break;

         case 4:
         case 6:
         case 9:
         case 11:

            printf("30 Days");
            break;

         default:

            printf("Invalid Month Number\nPlease Try Again!!!");
      }
   }
   getch();
}