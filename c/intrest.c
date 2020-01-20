// progrqm for intrest calculation

#include<stdio.h>


void main()
{
int period,i;
float intrest,amount;
printf("Enter amount");
scanf("%f",&amount);
printf("Enter period");
scanf("%d",&period);
printf("Enter interst");
scanf("%f",&intrest);
printf("Period        Amount\n");
for(i=0;i<=period;i++)
  { 
   printf("%d        %f\n",i,amount);
   amount=amount + amount*intrest;
  }

} 
