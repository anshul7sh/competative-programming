#include<stdio.h>
#include<stdlib.h>

void swap(int*,int*);
void bubble_sort(int [],int);
int binary_search(int [],int,int,int); 

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

int binary_search(int A[],int start,int end,int item)
{
     int m;
  
     if(end>=start)
     {
     m=start+(end-start)/2;
     if(A[m]==item)
        {   return m;  }
     else
      {  if(start!=end)
          { if(A[m]>item)
              return binary_search(A,start,m-1,item);
           else
             return binary_search(A,m+1,end,item);
          }
      }
     } 
     return -1;
}

void main()
{
    int A[10]={12,32,65,98,85,52,64,97,21,3},item,n;
    printf("\n Enter item to found.\n");
    scanf("%d",&item);
    n=sizeof(A)/sizeof(A[0]);
    bubble_sort(A,10);
   if(binary_search(A,0,n-1,item)==-1)
      printf("\n Item not found");
   else
      printf("\n Item found");
  
   return;
    
}
 