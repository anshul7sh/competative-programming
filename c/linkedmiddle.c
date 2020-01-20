#include<stdio.h>
#include<stdlib.h>

struct node* createnode();
void insertnode();
void printlist();
int delete();
int choice();
void No_of_element();
void middle_element();

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
   printf("\n 1.Insert node.\n 2.Delete node.\n 3.Print list.\n 4.Find total number of elements in list.\n 5. Find middle element of list. \n 6.Exit");
   printf("\n Enter your choice number. ");
   scanf("%d",&i);
   return i;
}

void No_of_element()
{
      int i;
      struct node *temp;

      temp=START;
      if(START==NULL)
        {
           printf("\n List is empty. \n");
           return ;
        }
      for(i=1;temp->link!=NULL;i++)
         temp=temp->link;

      printf("\n Number of elements in list : %d\n",i);
      return;

}

void middle_element()
{
      struct node *temp,*x;
      temp=START;
      x=START;
      if(temp==NULL)
        {
           printf("\n No middle element as List is empty. \n");
           return ;
        }
      while(temp->link!=NULL)
        {  if(temp->link->link!=NULL)
            {
               temp=temp->link->link;
               x=x->link;
            }
           else
            break;
        }
     
        printf("\n Middle element is %d.",x->info);
        return;
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
                           No_of_element();
                           break ;

                   case 5:
                           middle_element();
                           break;

                   case 6:
                           exit(0);
 
                   default:
                           printf("\n Invalid choice. \n");
                           break;
               }
     }
}
