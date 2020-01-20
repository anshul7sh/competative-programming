#include<stdio.h>
#include<stdlib.h>

void kthlargest(int [],int ,int );
int partition(int [],int ,int);
int swap(int *,int *);

int k=1;


void main()
{
   int A[]={3,1,5,6,2,4};
   int size=sizeof(A)/sizeof(A[0]);

   kthlargest(A,0,size-1);

   return;
}

void kthlargest(int A[],int start,int end)
{
   int poisition=end+1-k;
   int pindex; 

 
   if(start>=end)
     return;

   pindex=partition(A,start,end);

   while(pindex!=poisition)
	{
	   if(pindex>poisition)
	     pindex=partition(A,start,pindex-1);
           else
             pindex=partition(A,pindex+1,end);

	}

   printf("Required largest element is %d",A[poisition]);
}

int partition(int A[],int start,int end)
{
   int i,j;
   int pivot=A[end];

   i=start,j=start;

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

int swap(int *p,int *q)
{
    int temp=*p;
        *p=*q;
	*q=temp;
}
