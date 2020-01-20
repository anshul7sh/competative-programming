#include<stdio.h>
#include<stdlib.h>

int findnumbers(int *,int);

void main()
{
    int nums[]={12,345,2,6,7896,25469,415,58975,41256,3215487,50};
    int numsSize=sizeof(nums)/sizeof(int);
    int numbers;

    numbers=findnumbers(nums,numsSize);

    printf("%d",numbers);
    return;
} 

int findnumbers(int *nums,int numsSize)
{
    int i,count,numbers=0;   
    for(i=0;i<numsSize;i++)
    {
        count=0;
        while(nums[i]>=10)
        {
            nums[i]=nums[i]/10;
            count++;
        }

        if(count%2==1)
          numbers++;

    }

    return numbers;
}
 