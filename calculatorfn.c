#include<stdio.h>
#include<conio.h>
#include<math.h>

void sum(int,int);
void sub(int,int);
void multi(int,int);
void divide(float,float);
void root(int);
void squareroot(int);

int main()
{
    int a,b,c;
    float d,e;
    printf("***********************Calculator***********************\n ");
    printf("1:Addition\t\t\t\t\t");
    printf("\t2:subtraction\n");
    printf(" 3:multiplication\t\t\t\t");
    printf("4:division\n");
    printf("5:Root\t\t\t\t\t");
    printf("6:Squareroot\n\n");
    printf("\t\t\t\tEnter your choice=");
    scanf("%d", &a);
    
    
    switch(a)
    {
        case 1:
        {
            printf("Enter two number=");
            scanf("%d %d", &b,&c);
            sum(b,c);
            break;
        }
        case 2:
        {
           printf("Enter two number=");
            scanf("%d %d", &b,&c);
            sub(b,c);
            break; 
        }
        case 3:
        {
            printf("Enter two number=");
            scanf("%d %d", &b,&c);
            multi(b,c);
            break;
        }
        case 4:
        {
            printf("Enter two number=");
            scanf("%f %f", &d,&e);
            divide(d,e);
            break;
        }
        case 5:
        {
            printf("Enter the number=");
            scanf("%d",&b);
            root(b);
            break;
        }
        case 6:
        {
            printf("Enter the number=");
            scanf("%d",&b);
            squareroot(b);
            break;
        }
    }
    getch();
}

        void sum(int x,int y)
        {
            int sum;
            sum=x+y;
            printf("sum=%d",sum);
        }
        void sub(int x,int y)
        {
            int sub;
            sub=x-y;
            printf("sub=%d",sub);
        }
        void multi(int x,int y)
        {
            int multi;
            multi=x*y;
            printf("mltiplication=%d",multi);
        }
        void divide(float x,float y)
        {
            float divide;
            divide=x/y;
            printf("division=%f", divide);
        }
        void root(int x)
        {
            int root;
            root=x*x;
            printf("Root of %d is %d",x,root);
        }
        void squareroot(int x)
        {
            int squareroot;
            squareroot=sqrt(x);
            printf("squareroot=%d",squareroot);
        }
