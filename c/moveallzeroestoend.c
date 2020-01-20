 #include<stdio.h>
 
 void movezerotoend(int [],int);
 void swap(int*,int*);

 void main()
 {  int A[10],i,n;
   printf("Enter 10 numbers");
   for(i=0;i<10;i++)
      {
         scanf("%d",&A[i]);
      }
 for(i=0;i<10;i++)
     {
       printf("_%d",A[i]);
     }
  n=10;
 movezerotoend(A,n);

 printf("New array is /n"); 

  for(i=0;i<10;i++) 
    printf("_%d",A[i]);

  return;

 }

 void movezerotoend(int A[],int n)
 { int i,j=0;
  
  for(i=0;i<n;i++)
   { if(A[i]!=0)
      {  swap(&A[i],&A[j]);
         j=j+1;
      }
   }
   return;
}

void swap(int*p,int*q)
{  int temp=*p;
       *p=*q;
       *q=temp;
}
