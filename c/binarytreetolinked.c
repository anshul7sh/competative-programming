#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
}; 

struct node* createnode();
void insertnode(int); 
void printlist();

struct BSTnode
{
  int info;
  struct BSTnode *left;
  struct BSTnode *right;
};

struct BSTnode *STARTtree=NULL;


void insertnodetree(struct BSTnode *,struct BSTnode *);
struct BSTnode *createnodetree(int);
void assedlist(struct BSTnode *);

struct BSTnode *createnodetree(int item)
{
  struct BSTnode *temp;
  temp=(struct BSTnode *)malloc(sizeof(struct BSTnode));
  temp->info=item;
  temp->left=NULL;
  temp->right=NULL;
  insertnodetree(STARTtree,temp);
  return temp;
}


void insertnodetree(struct BSTnode *root,struct BSTnode *temp)
{
  if(STARTtree==NULL)
   {
      STARTtree=temp;
      return;
   }
   
  if(temp->info<root->info)
	{
		if(root->left!=NULL)
			insertnodetree(root->left,temp);
		else
			root->left=temp;
	}
	
	if(temp->info>root->info)
	{
		if(root->right!=NULL)
			insertnodetree(root->right,temp);
		else
			root->right=temp;
	}


}

struct node *START=NULL;

struct node* createnode()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof( struct node));
 return temp;
}

void insertnode(int item)
{
   struct node *temp, *new;
   temp=START;
   new=createnode();
   new->info=item;

   if(START==NULL)
      {
        START=new;
        return ;
      }

   while(temp->link!=NULL)
   {
     temp=temp->link;
   }

   temp->link=new;
   return ;
}

void assedlist(struct BSTnode *node)
{   
   if(node)
     {
        assedlist(node->left);
        insertnode(node->info);
        assedlist(node->right);
     }
     
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

void main()
{
   createnodetree(10);
   createnodetree(14);
   createnodetree(78);
   createnodetree(64);
   createnodetree(12);
   createnodetree(32);
   createnodetree(17);
   createnodetree(9);
   assedlist(STARTtree);
   printlist();
}

 