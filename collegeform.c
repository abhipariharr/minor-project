/*Writing a program to create a college application form*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b,d,e;
    int age;
    long int f,g;

    printf("age\n");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("Enter first name\n");
        scanf("%s", &a);
        printf("Your address\n");
        scanf("%s", &b);
        printf("Father's first name\n");
        scanf("%s", &d);
        printf("Mothers name\n");
        scanf("%s", &e);
        printf("Enter your phone number\n");
        scanf("%ld",&f);
        printf("Enter your class 12th marks\n=");
        scanf("%ld",&g);

        printf("\n\nThank you for submitting your information\nWe will notify you your exam date !!");
    }
    else
    {
        printf("Your are not eligible to give exam");
    }
    getch();
}
