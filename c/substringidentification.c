#include<stdio.h>
#include<string.h>

void main()
{
   int n,i,k=0,m=0;
   char A[10000];
   printf("\n Enter string ");
   gets(A);
   n=strlen(A);
   if(n>10000)
     {
       printf("\n Word limit exceed");
       return ;
     }
   printf("\nLength of string is %d and string is :",n);
   puts(A);
   for (i=1;i<n;i++)            
     {  if(A[k]==A[i])
         {
            k=k+1;
         }
     }
   printf("\n k=%d",k);
   for(i=1;i<(n/2);i++)             
      { if(A[m]==A[i])
         {
            break ;
         } 
      }
   printf("\n i=%d",i); 
     if((k+i)==n)
     {
       printf("\n True.");
     }
     else
       printf("\n False");
     return;
}
