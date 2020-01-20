#include<stdio.h>
#include<stdlib.h>

void mergesort(int [],int ,int );
void merge(int [],int ,int ,int);

void main()
{
   int A[]={3,4,5,1,2,6};
   int size=sizeof(A)/sizeof(A[0]);
   int i;
   printf("\nGiven array is :\n");
   for(i=0;i<size;i++)
      printf("%d_",A[i]);

   mergesort(A,0,size-1);

   printf("\nSorted array is :\n");
   for(i=0;i<size;i++)
      printf("%d_",A[i]); 

   return;
}
 
void mergesort(int A[],int start,int end)
{
  int mid;
  if(start<end)
    {
      mid=start+(end-start)/2;
      
      mergesort(A,start,mid);
      mergesort(A,mid+1,end);

      merge(A,start,mid,end);
    }
}

void merge(int A[],int start,int mid, int end)
{
   int i,j,k;
   int n1=mid-start+1;
   int n2=end-mid;
   int left[n1];
   int right[n2];

   for(i=0;i<n1;i++)
      left[i]=A[start+i];
   for(j=0;j<n2;j++)
      right[j]=A[mid+1+j];

   i=0,j=0,k=start;

   while(i<n1&&j<n2)
        {
	  if(left[i]<=right[j])
	    {
		A[k]=left[i];
		i++;
	    }
	  else
	    {
		A[k]=right[j];
		j++;
	    }
	
	  k++;
	}

   while(i<n1)
	{
	    A[k]=left[i];
	    i++;
	    k++;
	}
   while(j<n2)
	{
	    A[k]=right[j];
            j++;
	    k++;
	}
}













