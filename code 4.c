/*Menu driven program with the following options:

1.Whether a given set of three numbers are lengths of an isosceles triangle or not 
2.Whether a given set of three numbers are lengths of sides of a right angled triangle or not
3.Whether a given set of three numbers are equilateral triangle or not
4.Exit

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int ch,side1,side2,side3;
    while(1)
    {
        printf("\n\n1.To check whether the three sides are of the Isosceles Triangle or not");
        printf("\n2.To check whether the three sides are of the Right-angled Triangle or not");
        printf("\n3.To check whether the three sides are of the Equilateral Triangle or not");
        printf("\n4.Exit");
        printf("\n\nEnter Your Choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
               printf("Enter the sides of the Triangle\n");
               scanf("%d %d %d",&side1,&side2,&side3);
               if(side1==side2 || side2==side3 || side1==side3)
                  printf("The Triangle is Isosceles");
                else
                  printf("The Triangle is not Isosceles");
                break;

            case 2:
               printf("Enter the sides of the Triangle\n"); 
               scanf("%d %d %d",&side1,&side2,&side3);
               if(side1*side1==side2*side2+side3*side3 || side2*side2==side1*side1+side3*side3 || side3*side3==side1*side1+side2*side2)
                  printf("The Triangle is Right-angled");
                else
                  printf("The Triangle is not Right-angled");
                break;

            case 3:
               printf("Enter the sides of the Triangle\n");
               scanf("%d %d %d",&side1,&side2,&side3);
               if(side1==side2 && side2==side3)
                  printf("The Triangle is Equilateral");
                else
                  printf("The Triangle is not Equilateral");
                  break;

            case 4:
               exit(0);

            default:
               printf("Invalid Choice\n!!!Please Enter Correct Choice!!!");
        }
    }
    getch();
}