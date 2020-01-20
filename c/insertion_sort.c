#include<stdio.h>

void insertion_sort(int [],int);


void insertion_sort(int A[], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
       {
          temp=A[i];
          for(j=i-1;j>=0 && A[j]>temp;j--)
               A[j+1]=A[j];

          A[j+1]=temp;
       } 

    return;
}

void main()
{
      int A[10],i,n;
      printf("\n Enter 10 digits. ");
     
      for(i=0;i<10;i++)
         scanf("%d",&A[i]);
 
      printf("\n Given array is :");

      for(i=0;i<10;i++)
         printf("_%d",A[i]);

      n=sizeof(A)/sizeof(A[0]);

      insertion_sort(A,n);

      printf("\n New array is :");

      for(i=0;i<10;i++)
         printf("_%d",A[i]);

      return ;
}
 