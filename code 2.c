/*Menu driven program with the following options:
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit 

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int ch,num1,num2,sum,diff,prod;
    float n1,n2,div;
    while(1)
    {
        printf("\n\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Exit");
        printf("\n\nEnter Your Choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
               printf("Enter two numbers\n");
               scanf("%d %d",&num1,&num2);
               sum=num1+num2;
               printf("Sum of %d and %d is %d",num1,num2,sum);
               break;

            case 2:
               printf("Enter two numbers\n");
               scanf("%d %d",&num1,&num2);
               diff=num1-num2;
               printf("Difference of %d and %d is %d",num1,num2,diff);
               break;

            case 3:
               printf("Enter two numbers\n");
               scanf("%d %d",&num1,&num2);
               prod=num1*num2;
               printf("Product of %d and %d is %d",num1,num2,prod);
               break;

            case 4:
               printf("Enter two numbers\n");
               scanf("%f %f",&n1,&n2);
               div=n1/n2;
               printf("Quotient of %f and %f is %f",n1,n2,div);
               break;

            case 5:
               exit(0);

            default:
               printf("Invalid Choice\nPlease Enter Correct Choice!!!");
        }
    }
    getch();
}