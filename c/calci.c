#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define pi 3.1415926535897932384626433832795

void sum(int);
void difference();
void prod uct(int);
void divide();
int choice2(); 
int choice();
void squareroot();

int choice()
{
    int i;
    printf("\n 1. SUM");
    printf("\n 2. DIFFERENCE");
    printf("\n 3. PRODUCT");
    printf("\n 4. DIVIDE");
    printf("\n 5. TRIGNOMETRIC OPERATIONS");
    printf("\n 6. REMINDER");
    printf("\n 7. QUOTIENT");
    printf("\n 8. SQUARE ROOT");
    printf("\n 9. EXIT");
    printf("\n ENTER YOUR CHOICE NUMBER");
    scanf("%d",&i);
    return  i;
}

void main()
{
     double i,a;
     int x,y;
     while(1)
              {
                switch(choice())
            
                     {  case 1:
                               printf("\n Enter total number of items to add");
                               scanf("%lf", &i);
                               sum(i);
                               break ;
                       case 2: 
                               difference();
                               break ;
                       case 3:
                               printf("\n Enter total number of items to get their product");
                               scanf("%lf",&i);
                               product(i);
                               break ;
                       case 4:
                              divide();
                              break ;
                       case 5:
                               {
                                 switch(choice2())
                                                     
                                    {   case 10:
                                              printf("\n Enter number to get it's cosine in radians");
                                              scanf("%lf",&i);
                                              a=cos(i);
                                              printf("\n Final result is %lf",a);
                                              break ;

                                       case 11:
                                              printf("\n Enter number to get it's sine in radians");
                                              scanf("%lf",&i);
                                              a=sin(i);
                                              printf("\n Final result is %lf",a);
                                              break ;

                                       case 12:
                                              printf("\n Enter number to get it's tangent in radians");
                                              scanf("%lf",&i);
                                              a=tan(i);
                                              printf("\n Final result is %lf",a);
                                              break ;
                    
                                       case 13:
                                              printf("\n Enter number in degree to change in radian");
                                              scanf("%lf",&i);
                                              a=i*pi/180;
                                              printf("\n Number %lf in radian is %lf",i,a);
                                              break ;

                                       case 14: 
                                              break ;

                                       default:
                                               printf("\n Invalid choice");
                                              break ;
                                    }
                                    break;
                               } 
                       case 6:
                              printf("To get reminder first give dividend and than divisor");
                              scanf("%lf",&i);
                              scanf("%lf",&a);
                              y=i/a;
                              x=(i-y*a);
                              printf("Reminder is %d",x);
                              break ;
                       case 7:
                              printf("To get quoitent first give dividend and than divisor");
                              scanf("%lf",&i);
                              scanf("%lf",&a);
                              x=i/a;
                              printf("Quoitent is %d",x);
                              break ;
                       case 8:
                              squareroot();
                              break ;
                       case 9:
                              exit(0);
                       default:
                              printf("\n Ivalid choice");
                              break ;
                     }
             }
             return;

}

void sum(int n)
{
    int A[n],i,sum=0;
    printf("\n Enter %d numbers to add",n);
    for(i=0;i<n;i++)
           scanf("%d",&A[i]);
    for(i=0;i<n;i++)
           sum=sum+A[i];
    printf("\n sum is %d",sum);
    return ;
}

void difference()
{
     int x,y;
     printf("\n Enter numbrs to get their difference");
     scanf("%d",&x);
     scanf("%d",&y);
     printf("\n Difference of %d and %d is %d",x,y,x-y);
     return ;
}


void product(int n)
{
    int A[n],i,multiply=1;
    printf("\n Enter %d numbers to get their product",n);
    for(i=0;i<n;i++)
           scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        multiply=multiply*A[i];
    printf("\n Final result is %d",multiply);
    return ;
}


int choice2()
{
    int i;
    printf("\n 10. COSINE");
    printf("\n 11. SINE");
    printf("\n 12. TANGENT");
    printf("\n 13. RDIAN CHANGE");
    printf("\n 14. EXIT");
    printf("\n ENTER YOUR CHOICE NUMBER");
    scanf("%d",&i);
    return i;    
}

void divide()
{
   double i,a;
              printf("To get quoitent first give dividend and than divisor");
              scanf("%lf",&i);
              scanf("%lf",&a);
              printf("Final result is %lf",i/a);
              return ;
}

void squareroot()
{
  double i;
           printf("\n Enter number to get squaeroot");
           scanf("%lf",&i);
           printf("Final result is %lf",sqrt(i));
}
 