#include<stdio.h>
#include<stdlib.h>

struct btnode{
	int value;
	struct btnode *r;
	struct btnode *l;
	
};
struct btnode *root=NULL,*temp=NULL,*t2,*t1;

void insert();
void create();
void inorder(struct btnode *t);
void preorder(struct btnode *t);
void postorder(struct btnode *t);
int smallest(struct btnode *t);
int largerst(struct btnode *t);
void search(struct btnode *t);
int flag = 1;

void main()
{
	int ch;
	while(1)
	{
	printf("\n---------------------------------\n");
	printf("1.Insert\n2.Inorder\n3.Preorder\n4.PostOrder\n5.Exit\n");
	printf("\n------------------------------\n");
	printf("Enter your choice ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: insert();
		break;
		case 2: inorder(root);
		break;
		case 3: preorder(root);
		break;
		case 4: postorder(root);
		break;
		case 5: exit(0);
		break;
		default: printf("\nWrong Choice !! Please Enter correct choice  \n");
		break;
     }
	}
}

void insert()
{
	create();
	if(root == NULL)
	{
		root = temp;
	}
	else{
		search(root);
	}
}
void create()
{
	int data;
	printf("Enter the Value ");
	scanf("%d",&data);
     temp=(struct btnode*)malloc(1*sizeof(struct btnode));
     temp->value=data;
     temp->l = temp->r = NULL;
}

void search(struct btnode *t)
{
	if((temp->value > t->value) && (t->r != NULL))
	{
		search(t->r);
	}
	else if((temp->value < t->value) && (t->l != NULL))
	{
		search(t->l);
	}
	else if((temp->value > t->value) && (t->r == NULL))
	{
		t->r = temp;
	}
	else if((temp->value < t->value) && (t->l == NULL))
	{
		t->l=temp;
	}
}

void inorder(struct btnode *t)
{
	if(root == NULL)
	{
		printf("There is no element in the Binary Tree \n");
		return;
	}
	if(t->l != NULL)
	{
		inorder(t->l);
	}
	printf("%d -> ",t->value);
	if(t->r != NULL)
	{
		inorder(t->r);
	}
}

void preorder(struct btnode *t)
{
	if(root == NULL)
	{
		printf("There is no element in the binary tree \n");
		return;
	}
	printf("%d -> ",t->value);
	if(t->l != NULL)
	{
		preorder(t->l);
	}
	if(t->r != NULL)
	{
		preorder(t->r);
	}
}

void postorder(struct btnode *t)
{
	if(root == NULL)
	{
		printf("There is no element in the Binary Tree \n");
		return;
	}
	if(t->l != NULL)
	{
		postorder(t->l);
	}
	if(t->r != NULL)
	{
		postorder(t->r);
	}
	printf("%d -> ",t->value);
}
