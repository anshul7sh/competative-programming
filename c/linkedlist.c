#include<stdio.h>
#include<stdlib.h>

struct node* createnode();
void insertnode();
void printlist();
int delete();
int choice();

struct node
{
    int info;
    struct node *link;
}; 

struct node *START=NULL;

struct node* createnode()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof( struct node));
 return temp;
}

void printlist()
{     if(START==NULL)
        {
          printf("\n List is empty.\n");
          return ;
        }
      else
     {
      struct node *temp;
      temp=START;
      printf("\n List is:");
      while(temp->link!=NULL)
      {
         printf("_%d",temp->info);
         temp=temp->link;
      }
     printf("_%d\n",temp->info);
     }
}

void insertnode()
{
   int i,x,poisition;
   struct node *temp,*p,*q;
   printlist();
   printf("\n Enter poisition where to insert node");
   scanf("%d",&poisition);
   printf("\n Enter number to insert");
   scanf("%d",&x);
   temp=createnode();
   temp->info=x;
   if(poisition==1)
      {
         if(START==NULL)
         {
           START=temp;
           printlist();
           return;
         }
         else
         {
           p=START;
           START=temp;
           START->link=p;
           printlist();
           return;
         }
      }
   else 
      {
          if (poisition==2)
         {
              p=START->link;
              START->link=temp;
              temp->link=p;
              printlist();
              return ;
         }
          else
            {    
                 p=START;
                 for(i=0;i<poisition-2;i++)
                    p=p->link;

                    q=p->link;
                    p->link=temp;
                    temp->link=q;
                    printlist();
                    return;
            }
      }

}

int delete()
{
   int i,item;
   struct node *temp,*p;
   printlist();
   temp=START;
   if(temp==NULL)
     {
       return 0;
     }
   printf("\n Enter item to delete ");
   scanf("%d",&item);

   if(item==temp->info)
      {
          START=temp->link;
          i=temp->info;
          free(temp);
          printlist();
          return i;
      }
   while(temp->link->info!=item)
         temp=temp->link;
        
   p=temp->link;
   temp->link=p->link;
   i=p->info;
   free(p);
   printlist();
   return i;
 
}

int choice()
{
   int i;
   printf("\n 1.Insert node.\n 2.Delete node.\n 3.Print list.\n 4.exit.");
   printf("\n Enter your choice number. ");
   scanf("%d",&i);
   return i;
}

void main()
{  int x;
   while(1)
     {
         switch(choice())
               {
                   case 1:
                           insertnode();
                           break;

                   case 2: 
                           x=delete();
                           printf("\n Deleted item is %d \n",x);
                           printlist();
                           break;
 
                   case 3:
                           printlist();
                           break;
                  
                   case 4:
                           exit(0);
 
                   default:
                           printf("\n Invalid choice. \n");
                           break;
               }
     } 
}
