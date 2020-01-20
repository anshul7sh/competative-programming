#include<stdio.h>
#include<stdlib.h>

int subsequence(int [], int);

void main()
{
  int A[]={-1,3,4,5,2,2,2,2};
  int size=sizeof(A)/sizeof(A[0]);
  int item;
  item=subsequence(A,size);
  printf("Longest nondecreasing subsequence is of elements :%d",item);
  return;
}
int subsequence(int A[], int size)
{
  int i,j=1,max=0;
  int temp[size];
  for(i=0;i<size;i++)
     temp[i]=1;
  i=0; 
  while(j<=size)
       {
         i=0;
         while(i<j) 
	      {
            	if(A[j]>=A[i])
		    if(temp[j]<(temp[i]+1))
                      temp[j]=temp[i]+1;
                 i++;
	      }j++;
       }
  for(i=0;i<size;i++)
     if(temp[i]>max)
       max=temp[i];
  return max;
}
