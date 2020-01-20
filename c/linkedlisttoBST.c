#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct BSTnode
{
  int info;
  struct BSTnode *left; 
  struct BSTnode *right;
};

struct node *STARTlist=NULL;
struct BSTnode *START=NULL; 

void createnode(int);
void insertnode(struct node *);
void printlist();
int middle_element();
void formchange();

void insertnodeBST(struct BSTnode *,struct BSTnode *);
struct BSTnode *createnodeBST();

void createnode(int item)
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof( struct node));
   temp->link=NULL;
   temp->info=item;
   insertnode(temp);
   return;
}

void insertnode(struct node *root)
{ 
    struct node *temp;
    temp=STARTlist;

    if(STARTlist==NULL)
      {
          STARTlist=root;
          return;
      }
   while(temp->link!=NULL)
    {
       temp=temp->link;
    }
 
    temp->link=root;
    return;
}

void printlist()
{
     struct node *temp;
     if(STARTlist==NULL)
        {
          printf("\n List is empty.\n");
          return ;
        }
      else
     {
      struct node *temp;
      temp=STARTlist;
      printf("\n List is:");
      while(temp->link!=NULL)
      {
         printf("_%d",temp->info);
         temp=temp->link;
      }
     printf("_%d\n",temp->info);
     }
}

int middle_element()
{
      struct node *fast,*slow;
      fast=STARTlist;
      slow=STARTlist;
      if(fast==NULL)
        {
           printf("\n No middle element as List is empty. \n");
           return ;
        }
      while(fast->link!=NULL)
        {  if(fast->link->link!=NULL)
            {
               fast=fast->link->link;
               slow=slow->link;
            }
           else
            break;
        }
     
        printf("\n Middle element is %d.",slow->info);
        return slow->info;
}

void main()
{
   createnode(1);
   createnode(2);
   createnode(3);
   createnode(4);
   createnode(5);
   createnode(6);
   createnode(7);
   printlist();
   middle_element();
}

void formchange()
{
     createnodeBST(middle_element);
}

struct BSTnode *createnodeBST(int item)
{
  struct BSTnode *temp;
  temp=(struct BSTnode *)malloc(sizeof(struct BSTnode));
  temp->info=item;
  temp->left=NULL;
  temp->right=NULL;
  insertnodeBST(START,temp);
  return temp;
}


void insertnodeBST(struct BSTnode *root,struct BSTnode *temp)
{
  if(START==NULL)
   {
      START=temp;
      return;
   }
   
  if(temp->info<root->info)
	{
		if(root->left!=NULL)
			insertnodeBST(root->left,temp);
		else
			root->left=temp;
	}
	
	if(temp->info>root->info)
	{
		if(root->right!=NULL)
			insertnodeBST(root->right,temp);
		else
			root->right=temp;
	}


}
