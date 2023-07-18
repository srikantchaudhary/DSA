#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insertbeg();
void insertend();
void insertanypos();
void deletebeg();
void deleteend();
void deletepos();


struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;


int main()
{
	while(1)
	{
          int ch;
          printf("\n---------------------------------------\n");
	     printf("1.create\n2.display\n3.insert at begning\n4.insert at end\n5.insert at any position\n");
	     printf("6.Delete from begning\n7.Delete from end\n8.Delete from any position\n9.exit\n");
	     printf("\n----------------------------------------\n");
	     printf("Enter your choice  ");
	     scanf("%d",&ch);
	switch(ch)
	{
//		case 1: create();
//		break;
		case 2: display();
		break;
		case 3: insertbeg();
		break;
//		case 4:insertend();
//		break;
//		case 5:insertanypos();
//		break;
//		case 6:deletebeg();
//		break;
//		case 7:deleteend();
//		break;
//		case 8:deletepos();
//		break;
		case 9: exit(0);
		break;
		default:printf("Wrong choice ");
		break;
	}
     }	
}

void display()
{
	struct node *ptr;
	if(start == NULL )
	{
		printf("Linked list is Empty ....................\n");
	}
	else{
		ptr=start;
		printf("Elements of the circular linked list is \n");
		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}

void insertbeg()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&newnode->data);
	if(start == NULL)
	{
		newnode->next=NULL;
		start=newnode;
	}
	else{
		newnode->next=start;
		start=newnode;
	}
	
}
