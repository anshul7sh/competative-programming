#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void sum();
void multiply();
void sustraction();
int choice();

void sum()
{
     int x,y;
     printf("Enter two numbers to get sum \n");
     scanf("%d",&x);
     scanf("%d",&y);
     printf("Sum of %d and %d is %d \n",x,y,x+y);
     return;
}

void multiply()
{
   int x,y;  
   printf("Enter two numbers to get product \n");
   scanf("%d",&x);
   scanf("%d",&y);
   printf(" Produt of %d and %d is %d \n",x,y,x*y);
   return;
}

void substraction()
{
   int x,y;
     printf("Enter two numbers to get difference \n");
     scanf("%d",&x);
     scanf("%d",&y);
     printf("Difference of %d and %d is %d \n",x,y,x-y);
     return;
}

int choice()
{
    int i;
    printf("1. SUM. \n");
    printf("2. DIFFERENCE. \n");
    printf("3. MULTIPLICATION. \n");
    printf("4. EXIT. \n");
    printf("Enter choice number \n");
    scanf("%d",&i);
    return i;
}

void main()
{
   while(1)
   {
     switch (choice())
            {
                 case 1: sum() ;
                         break ;
  
                 case 2: substraction() ;
                         break ;
 
                 case 3: multiply() ;
                         break ;

                 case 4: exit(0) ;

                 default : printf("Invalid choice \n");
                           break ;
            }
   }
}
















