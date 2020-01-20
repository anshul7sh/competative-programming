#include<stdio.h>
#include<stdlib.h>

void quicksort(int [],int ,int);
int partition(int [],int ,int);
void swap(int *,int *);

void swap(int*p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}


void main()
{
   int A[]={1,8,5,9,7,6,4,3,2,10}; 
   int size=sizeof(A)/sizeof(A[0]);
   int i;
   printf("\nGiven array is :\n");
   for(i=0;i<size;i++)
      printf("%d_",A[i]); 

   quicksort(A,0,size-1);

   printf("\nSorted array is :\n");
   for(i=0;i<size;i++)
      printf("%d_",A[i]);

   return;
}

void quicksort(int A[],int start,int end)
{
   int partitionindex;
   if(start>=end)
     return;

   partitionindex=partition(A,start,end);

   quicksort(A,start,partitionindex-1);
   quicksort(A,partitionindex+1,end);
}

int partition(int A[],int start,int end)
{
   int pivot=A[end];
   int i=start,j=start;

   while(i<end)
	{
	   if(A[i]<=pivot)
	     {
		swap(&A[i],&A[j]);
		j++;
	     }
	   i++;
	}
   swap(&A[j],&A[end]);
 
   return j;
}

