#include<stdio.h>
#include<stdlib.h>

void selection_sort(int [], int);
void swap(int*,int*);

void selection_sort(int A[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
          if(A[i]>A[j])
            swap(&A[i],&A[j]);
}

void swap(int*p,int *q)
{
     int temp=*p; 
         *p=*q;
         *q=temp;     
}

void main()
{ 
   int A[10]={4,25,8,65,98,87,877,7,96,5},n,i;
   printf("\n Enter 10 digits.");

   for(i=0;i<10;i++)
   scanf("%d",&A[i]);

   printf("Given array is: ");
   for(i=0;i<10;i++)
   printf("_%d",A[i]);
   n=sizeof(A)/sizeof(A[0]);
   selection_sort(A,n);
   printf("\n Sorted array is : \n");
   for(i=0;i<10;i++)
   printf("_%d",A[i]);
   
}
