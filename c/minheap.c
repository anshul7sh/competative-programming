#include <stdio.h>

void heapify(int[], int);
void swap(int *, int *);

void swap(int *p, int *q)
{
   int temp = *p;
   *p = *q;
   *q = temp;
}

void main()
{
   int A[9] = {27, 17, 97, 57, 37, 67, 87, 07, 47};
   int i;
   heapify(A, 9);
   printf("Heapified array is\n");
   for (i = 0; i < 9; i++) 
      printf("%d ", A[i]);
   return;
}
 
void heapify(int A[], int size)
{
   int i, flag = 1, p, q;
   while (flag)
   {
      flag = 0;
      i = size / 2 - 1;
      for (i; i >= 0; i--)
      {
         p = 2 * i + 1;
         q = 2 * i + 2;
         if (A[p] < A[i])
         {
            swap(&A[p], &A[i]);
            flag = 1;
         }
         if (A[q] < A[i])
         {
            swap(&A[q], &A[i]);
            flag = 1;
         }
      }
   }
}
