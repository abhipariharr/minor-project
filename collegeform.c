/*Writing a program to create a college application form*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b,d,e;
    int age;

    printf("full name\n");
    scanf("%s", &a);
    printf("age\n");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("your address\n");
        scanf("%s", &b);
        printf("Father's name\n");
        scanf("%s", &d);
        printf("mothers name\n");
        scanf("%s", &e);
    }
    else
    {
        printf("wrong choice");
    }
    getch();
}