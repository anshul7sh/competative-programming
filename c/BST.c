#include<stdio.h>
#include<stdlib.h>


struct BSTnode
{ 
  int info;
  struct BSTnode *left;
  struct BSTnode *right; 
};

void insertnode(struct BSTnode *,struct BSTnode *);
struct BSTnode *createnode();
void inorder(struct BSTnode *);
int delete(int);

struct BSTnode *START=NULL;

struct BSTnode *createnode()
{
  struct BSTnode *temp;
  temp=(struct BSTnode *)malloc(sizeof(struct BSTnode));
  printf("\n Enter number to insert.\n");
  scanf("%d",&temp->info);
  temp->left=NULL;
  temp->right=NULL;
  insertnode(START,temp);
  return temp;
}


void insertnode(struct BSTnode *root,struct BSTnode *temp)
{
  if(START==NULL)
   {
      START=temp;
      return;
   }
   
  if(temp->info<root->info)
	{
		if(root->left!=NULL)
			insertnode(root->left,temp);
		else
			root->left=temp;
	}
	
	if(temp->info>root->info)
	{
		if(root->right!=NULL)
			insertnode(root->right,temp);
		else
			root->right=temp;
	}


}

int delete(int item)
{
    struct BSTnode *temp=START;
    int value;

    if(START==NULL)
      {
         printf("\nList is empty\n");
         return NULL;
      }
    else
      {
        if(temp->info==item)
             {  
               
             }

      }
}

void inorder(struct BSTnode *root)
{
    if (root)
        { 
          inorder(root->left);
          printf("_%d",root->info);
          inorder(root->right);
        }
}

void main()
{
   createnode();
   createnode();
   createnode();
   createnode();
   createnode();
   createnode();
   createnode();
   inorder(START);
}




 




