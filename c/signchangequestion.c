#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
   int A[]={3,-1,0,2};
   int k=3;
   int min,i,index,sum=0;
   int size=sizeof(A)/sizeof(A[0]);

   while(k>0)
	{
	  min=INT_MAX;
          for(i=0;i<size;i++)
             if(A[i]<min)
	       {
		 min=A[i];
		 index=i; 
               }
          A[index]=-A[index];
          k--;
	} 
   
    for(i=0;i<size;i++)
       sum=sum+A[i];  

    printf("maximun sum is %d",sum); 
}
