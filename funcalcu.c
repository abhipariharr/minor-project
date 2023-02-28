    /*Writing a program to make small calculator*/

   //preproceesor section

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   //Declaring variable
    int a,b,c;
    float d,e;
    double num, squareRoot, Root;
    
    //Print statement
    A:
    
    printf("1-> addition\t\t\t");
    printf("2-> subtraction\n");
    printf("3-> multiplication\t\t");
    printf("4-> division\n");
    printf("5-> square root\t\t\t");
    printf("6-> root\n");
    printf("7-> remainder\t\t\t");
    printf("8-> exit\n\n\t\t");
    printf("Enter= ");
    //Entering values
    scanf("%d", &a);

    //switch case

    switch (a)
    {
        case 1:
            printf("enter the first number=");
            scanf("%d", &b);
            printf("enter the second number=");
            scanf("%d", &c);
            printf("This is your sum=%d \n\n", b+c);
            break;
    
        case 2:
            printf("enter the first number=");
            scanf("%d", &b);
            printf("enter the second number=");
            scanf("%d", &c);
            printf("This is your sub=%d \n\n", b-c);
            break;

         case 3:
            printf("enter the first number=");
            scanf("%d", &b);
            printf("enter the second number=");
            scanf("%d", &c);
            printf("This is your multiplication=%d \n\n", b*c);
            break;

         case 4:
            printf("enter the first number=");
            scanf("%f", &d);
            printf("enter the second number=");
            scanf("%f", &e);
            printf("This is your division=%f \n\n", d/e);
            break;
        
        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num);
            squareRoot = sqrt(num);
            printf("Square root of %.2lf = %.2lf \n", num, squareRoot);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num);
            Root = num*num;
            printf("Root of %.2lf = %.2lf\n ", num,Root);
            break;

        case 7:
            printf("Enter the number= ");
            scanf("%d", &a);
            printf("Enter the second number= ");
            scanf("%d", &b);
            printf("Remainder is = %d\n ", a%b);
            break;

        case 8:
            printf("press enter to exit");
            break;

        default:
        printf("Wrong choice check your given input\n");
        goto A;
    }
    getch();
}