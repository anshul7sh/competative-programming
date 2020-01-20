#include <stdio.h>
#include <stdlib.h>
 
struct node 
{
   int info;
   struct node *link;
};

struct node *START = NULL;

void createnode(int);
void insertnode(struct node *);
void printlist();
int balancenode(struct node *);

void createnode(int item)
{
   struct node *temp;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->link = NULL;
   temp->info = item;
   insertnode(temp);
   return;
}

void insertnode(struct node *root)
{
   struct node *temp;
   temp = START;

   if (START == NULL)
   {
      START = root;
      return;
   }
   while (temp->link != NULL)
   {
      temp = temp->link;
   }

   temp->link = root;
   return;
}

void printlist()
{
   struct node *temp;
   if (START == NULL)
   {
      printf("\n List is empty.\n");
      return;
   }
   else
   {
      struct node *temp;
      temp = START;
      printf("\n List is:");
      while (temp->link != NULL)
      {
         printf("_%d", temp->info);
         temp = temp->link;
      }
      printf("_%d\n", temp->info);
   }
}

int balancednode(struct node *START)
{
   int sum = 0, sumprehalf = 0, sumposthalf = 0, sumhalf;
   struct node *temp = START, *balance;

   while (temp->link != NULL)
   {
      sum = sum + temp->info;
      temp = temp->link;
   }
   sum = sum + temp->info;
   temp = START;
   sumprehalf = sumprehalf + temp->info;

   sumhalf = sum / 2;
   while (sumprehalf <= sumhalf)
   {
      temp = temp->link;
      sumprehalf = sumprehalf + temp->info;
   }
   sumprehalf = sumprehalf - temp->info;
   balance = temp;
   temp = temp->link;

   while (temp->link != NULL)
   {
      sumposthalf = sumposthalf + temp->info;
      temp = temp->link;
   }
   sumposthalf = sumposthalf + temp->info;

   if (sumprehalf == sumposthalf)
      return (balance->info);
   else
      return -1;
}

void main()
{
   int balance;

   createnode(1);
   createnode(2);
   createnode(7);
   createnode(10);
   createnode(1);
   createnode(6);
   createnode(3);
   printlist();

   balance = balancednode(START);
   if (balance == -1)
      printf("\n No balance node exist.");
   else
      printf("\n Balance node is %d.", balance);

   return;
}
 