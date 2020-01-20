#include<stdio.h>
#include<stdlib.h>

void main()
{
    int B[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j;
    int m=4,n=4;
    int count=m*n;
    int loop=0;

    printf("\n Given matrix is:\n");
    for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
          printf("%d  ",B[i][j]); 

      printf("\n");
    }

    printf("\n In helical order print is:\n");
    i=0;j=0;
    while(count>0)
    {
        while(j<n)
        {
            printf("%d ",B[i][j]);
            count--;
            j++;
            if(count<=0)
            return;
        }
        
        j--;
        i++;
        while(i<m)
        {
            printf("%d ",B[i][j]);
            count--;
            i++;
            if(count<=0)
            return;
        }
       
        i--;
        j--;
        while(j>=0&&j>=loop)
        {
            printf("%d ",B[i][j]);
            count--;
            j--;
            if(count<=0)
            return;
        }
     
        j++;
        i--;
        
        while(i>loop)
        {
            printf("%d ",B[i][j]);
            count--;
            i--;
            if(count<=0)
            return;
        }

        i++;
        j++;
        loop++;
        m=m-1;
        n=n-1;


    }


    return;
} 