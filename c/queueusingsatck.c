#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int capacity;
    int *array;
};

struct queue
{
    int start;
    int end;
    int capacity;
    int *array;
};

void push(struct stack*,int);
void printstack(struct stack*);
void add(struct queue*,struct stack*);
void printqueue(struct queue*); 

void main()
{  int capacity=5; 

   struct stack* temp=(struct stack*)malloc(sizeof(struct stack));
   temp->top=-1;
   temp->capacity=capacity;
   temp->array=(int *)malloc(capacity*sizeof(int));

   struct queue* START=(struct queue*)malloc(sizeof(struct queue)); 
   START->start=-1;
   START->end=-1;
   START->capacity=capacity;
   START->array=(int *)malloc(capacity*sizeof(int));

   push(temp,4);
   push(temp,8);
   push(temp,12);
   push(temp,16);
   push(temp,25);
   printf("Stack is;\n");  
   printstack(temp);

    add(START,temp);
    add(START,temp);
    add(START,temp);
    add(START,temp);

   printf("Stack is;\n");  
   printstack(temp);

   printf("Queue is;\n");  
   printqueue(START);

   return;
}

void push(struct stack* temp,int item)
{
  temp->top++;
  temp->array[temp->top]=item;
  return;
}

void printstack(struct stack * temp)
{
    int i;

    if(temp->top==-1)
    {
      printf("Stack is empty.\n");
      return;
    }
    for(i=0;i<=temp->top;i++)
       printf("%d  ",temp->array[i]);


}

void add(struct queue* START,struct stack* temp)
{
  int data;
  data=temp->array[temp->top];
  temp->top--;
  START->start++;
  START->array[START->start]=data;
}

void printqueue(struct queue* START)
{
   int i;

   if(START->start==START->end)
   {
        printf("Queue is empty.\n");
        return;
   }

   for(i=START->end+1;i<=START->start;i++)
      printf("%d  ",START->array[i]);


}