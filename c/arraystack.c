#include<stdio.h>
#include<stdlib.h>

struct arraystack *createstack(int);  
int isfull(struct arraystack *);
int isempty(struct arraystack *);
void push(struct arraystack *,int);
int pop(struct arraystack*);
void printstack(struct arraystack *);
int choice();

struct arraystack
{
   int top;
   int capacity;
   int *array;
};

struct arraystack *createstack(int capacity)
{
   struct arraystack *temp;
   temp=(struct arraystack *)malloc(sizeof(struct arraystack));
   temp->capacity=capacity;
   temp->top=-1;
   temp->array=(int *)malloc(sizeof(int)*capacity);
   return(temp);
}

int isfull(struct arraystack *temp)
{
   if(temp->top==temp->capacity-1)
      return(1);
   else
      return(0);
}

int isempty(struct arraystack *temp)
{
   if(temp->top==-1)
     return(1);
   else
     return(0);
}

void push(struct arraystack *temp,int item)
{
   if(!isfull(temp))
     {
        temp->top++;
        temp->array[temp->top]=item;
     }
   else
      printf("\n Stack is full");
}

int pop(struct arraystack *temp)
{     
   int item;
   if(!isempty(temp))
     {
       item=temp->array[temp->top];
       temp->top--;
       printf("popped item is %d.",item);
       return (1);
     }

   return(-1);
   ;
}

void printstack(struct arraystack *temp)
{
     int i;
     if(temp->top==-1)
        { 
          printf("\n stack is empty");
          return;
        }
     for(i=0;i<=temp->top;i++)
     printf("_%d",temp->array[i]);
}

int choice()
{
  int choice;
  printf("\n 1.push.\n 2.pop.\n 3.print array.\n 4.exit.\n");
  printf("Enter your choice");
  scanf("%d",&choice);
  return choice;
}

void main()
{
   int capacity,item;
   struct arraystack *temp;
   printf("\n printf capacity of stack.\n");
   scanf("%d",&capacity);
   temp=createstack(capacity);
   while(1)
   {
     switch(choice())
           {
               case 1:
		      printf("\n Enter element to insert.\n");
		      scanf("%d",&item);
                      push(temp,item);
                      break;

               case 2:
                      item=pop(temp);
                      if(item==-1)
                         printf("\n List is empty");
                      break;

               case 3:
                      printstack(temp);
                      break;

               case 4:
                      exit(0);

               default :
                      printf("\n Invalid choice");
                      break;
           }

   }
}











