#include<stdio.h>

void swap(int*,int*);
void bubble_sort(int [],int);

void swap(int *p,int *q)
{
   int temp=*p;  
       *p=*q;
       *q=temp; 
}

void bubble_sort(int A[], int n)
{
    int i,j,flag=0;
    for(i=0;i<n;i++)
     {  for(j=0;j<n-i-1;j++)
           if(A[j]>A[j+1])
             {
               swap(&A[j],&A[j+1]);
               flag=1;
             }
        if(flag==0)
          return;
     }
}

void main()
{
      int A[10],i;
      printf("\n Enter 10 elements\n");
      for(i=0;i<10;i++)
          scanf("%d",&A[i]);

      printf("\n Given array is :");
      for(i=0;i<10;i++)
          printf("_%d",A[i]);

      bubble_sort(A,10);

      printf("\n new array is :");
      for(i=0;i<10;i++)
          printf("_%d",A[i]);
     
      return;    
}
 