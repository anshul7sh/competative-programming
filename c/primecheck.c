#include<stdio.h>
#include<math.h>

void main()
{
   int i,x;
   printf("Enter number to check weather it is a prime number");
   scanf("%d",&x);
   for(i=2;i<sqrt(x);i++)
     { if(x%i==0)
          { printf(" Entered number is not a prime number");
            return;
          }
     }
   printf("Entered number is a prime number");
   return;
} 
 