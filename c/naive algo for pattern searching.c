#include<stdio.h>
#include<string.h>

void serach(char*,char*);

void serach(char* pat,char* txt)
{
	int m,n,i,j;
	 m= strlen(pat);
	 n= strlen(txt);

     for(i=0;i<=n-m;i++)
     { 
        for(j=0;j<m;j++)
           if(pat[j]!=txt[i+j])
               break;
           
        if(j==m)
          printf("pattern found at index %d \n",i);   
     } 
}

int main()
{  

    char txt[] = "AABAACAADAABAAABAA"; 
    char pat[] = "AABA";
    serach(pat,txt);
    return 0;
}
