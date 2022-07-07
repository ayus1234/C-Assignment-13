//Program which takes the day number of a week and displays a unique greeting message for the day

#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    while(1)
    {
        printf("\n\nEnter the Day Number of the Week\n");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
               printf("HAPPY MONDAY\n!!!Have a Great Start of your Week");
               break;

            case 2:
               printf("GOOD TIDINGS TUESDAY");
               break;

            case 3:
               printf("HAVE A WONDERFUL WEDNESDAY");
               break;

            case 4:
               printf("IT'S THANKFUL THURSDAY");
               break;

            case 5:
               printf("HAVE A FABULOUS FRIDAY");
               break;

            case 6:
               printf("MAY A JOYFUL AND AMAZING SATURDAY\n!!!Enjoy Your Weekend");
               break;

            case 7:
               printf("WISHING A BLESSED AND BEAUTIFUL SUNDAY");
               break;

            default:
               printf("INVALID DAY NUMBER\n!!!Please Enter Valid Day Number");
        }
    }
    getch();
}