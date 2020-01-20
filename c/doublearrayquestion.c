#include<stdio.h>
#include<stdlib.h>

void sort(int [],int [],int,int);
void swap(int *,int *);

void swap(int *p,int *q)
{
   int temp=*p;
   *p=*q;
   *q=temp;
} 

void main()
{
   int arr1[]={2,3,1,3,2,4,6,19,9,2,7,56,14,98,23,8}, arr2[]={2,1,4,3,9,6};
   int size1,size2;
   size1=sizeof(arr1)/sizeof(arr1[0]);
   size2=sizeof(arr2)/sizeof(arr2[0]);
   sort(arr1,arr2,size1,size2);
   return;
}

void sort(int arr1[],int arr2[],int size1,int size2)
{
    int i,j=0,k=0;

    for(i=0;i<size2;i++)
	{  
	   j=0;
	   while(j<size1) 
 	   {
             if(arr1[j]==arr2[i])
             {
		swap(&arr1[j],&arr1[k]);
                k++;
	     }
             j++;
 	    }
	}
   while(k<size1)
   { 
      i=(k+1);
      while(i<size1)
         {
           if(arr1[k]>arr1[i])
              swap(&arr1[i],&arr1[k]);
             i++;
         }
      k++;
   }
   for(i=0;i<size1;i++)
      {
         printf("_%d",arr1[i]);
      }
   return;
}
 