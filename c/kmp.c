#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void KMP(char [],char [],int ,int );

void main()
{
    char text[]={"AAAAAABCD"};
    char pat[]={"AABCD"};

    int n=strlen(text);
    int m=strlen(pat);

    KMP(text,pat,n,m);

    return;
}

void KMP(char text[],char pat[],int n,int m)
{
    int index[m];
    int i,j=0,place;

    if(n<m||m==0)
     return; 

    index[0]=0;
    for(i=1;i<m;i++)
    {
        if(pat[i]==pat[j])
        {
            index[i]=j+1;
            j++;
        }
        else
        {
            index[i]=0;
            j=0;
        }
    }

    j=0;
    for(i=0;i<n;i++)
    {
        if(text[i]==pat[j])
            j++;
        else
        {
            if(j<0)
            {j=0;}
            else
            {
                j=index[j-1];
                i--;
                if(i==(n-2))
                {
                  printf("\nPattern not found.");
                  return;
                }
                
            }
        }
        if(j==m)
        {
            place=i-j+1;
            printf("\nPattern foundat index %d.",place);
            return;
        }
    }

    if(j==m)
    {
        place=i-j+1;
        printf("\nPattern foundat index %d.",place);
    }
    else
        printf("\nPattern not found.");

    return;
} 