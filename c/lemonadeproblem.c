#include<stdio.h>
#include<stdlib.h>

void changeavailable(int [],int);

int main()
{
   int A[]={5,5,10,10,20};
   int len;
   len= sizeof(A)/sizeof(int);
   changeavailable(A,len);
   return 0;
}

void changeavailable(int A[],int len)
{
   int moneychange[]={0,0,0}; /*here 1st block represents no of 5$ and 2nd represents hat of 10$ and so on */
   int i;
   for(i=0;i<len;i++)
   { 
      if(A[i]==5)
        { 
            moneychange[0]++;
            printf("True.\n");
        }
      else if(A[i]==10)
            { 
               moneychange[1]++;
               moneychange[0]--;
               if(moneychange[0]<0)
                 {
                   printf("False.\n");
                   return;
                 }
               printf("True.\n");
            }
           else
            { 
               moneychange[2]++;
               if(moneychange[1]>0)
                 {
                    moneychange[1]--;
                    moneychange[0]--;
                    if(moneychange[0]<0||moneychange[1]<0)
                        {
			   printf("False.\n");
                 	   return;
			}
                 }
               else
                 {
		    moneychange[0]--;
                    moneychange[0]--;
                    moneychange[0]--;
                    if(moneychange[0]<0||moneychange[1]<0)
                      {
			   printf("False.\n");
                 	   return;
		      }
                 }

                printf("True.\n");
               
            }
   }

   


}

 