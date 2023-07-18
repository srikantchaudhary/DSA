#include<stdio.h>
#include<stdlib.h>
struct btnode{
	int data;
	struct btnode *l;
	struct btnode *r;
}*root=NULL,*temp=NULL,*t2,*t1;

void insert();
void delete();
void delete1();
void search(struct btnode *t);
void create();
void inorder(struct btnode *t);

void main()
{
    int ch;

    printf("\nOPERATIONS ---");
    printf("\n1 - Insert an element into tree\n");
    printf("2 - Delete an element from the tree\n");
    printf("3 - Inorder Traversal\n");
   /* printf("4 - Preorder Traversal\n");
    printf("5 - Postorder Traversal\n");   */
    printf("6 - Exit\n");
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
       /* case 2:
            delete();
           break;      */
        case 3:
            inorder(root);
            break;
      /*  case 4:
            preorder(root);
            break;
        case 5:
            postorder(root);
            break;    */
        case 4:
            exit(0);
        default :
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}

void insert(){
	               
	          create();
	          if(root==NULL){
	          	root=temp;
			}
			else{
				search(root);
			}
	
}
void create(){
	int value;
	printf("\nEnter the data    ");
	scanf("%d",&value);
	temp=(struct btnode *)malloc(1*sizeof(struct btnode));
	temp->data=value;
	temp->l  =  temp->r  =  NULL;
}

void search(struct btnode *t){
	if((temp->data > t->data) &&(t->r !=NULL)){
		search(t->r);
		
	}else if((temp->data > t->data) && (t->r == NULL)){
		t->r=temp;
	}else if((temp->data < t->data) && (t->l !=NULL))
	{
		search(t->l);
	}
	else if((temp->data < t->data) && (t->l == NULL)){
		t->l=temp;
	}
}

void inorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (t->l != NULL)
        inorder(t->l);
    printf("%d -> ", t->data);
    if (t->r != NULL)
        inorder(t->r);
}

