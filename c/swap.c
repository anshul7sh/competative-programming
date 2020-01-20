#include<stdio.h>


void swap(int*p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
 int x,y;
 int *p,*q;
printf("Enter two numners");
scanf("%d",&x);
scanf("%d",&y);
p=&x;
q=&y;
swap(p,q);
printf("%d,%d",*p,*q);
 
}
 