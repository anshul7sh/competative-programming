#include<stdio.h>
#include<stdlib.h>

int linear_search(int [],int,int);
void swap(int*,int*);
void bubble_sort(int [],int);

int linera_search(int A[],int n,int item)
{
    int i;
    bubble_sort(A,n);
    for(i=0;i<n;i++)
        if(A[i]==item)
          return 1;
        

    return 0;
}

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
    int A[10]={21,65,98,58,47,12,68,25,493,8},item;
    printf("\n Enter element to search. ");
    scanf("%d",&item);
    if(linera_search(A,10,item))
       printf("\n Item found.\n");
    else
       printf("Item missing");
 
    return;

}
