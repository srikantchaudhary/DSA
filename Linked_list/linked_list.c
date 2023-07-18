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
		case 1: create();
		break;
		case 2: display();
		break;
		case 3: insertbeg();
		break;
		case 4:insertend();
		break;
		case 5:insertanypos();
		break;
		case 6:deletebeg();
		break;
		case 7:deleteend();
		break;
		case 8:deletepos();
		break;
		case 9: exit(0);
		break;
		default:printf("Wrong choice ");
		break;
	}
     }	
}

//----------------------------------create linked list---------------------------------------

void create()
{
	struct node *temp,*ptr;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data which you want to insert in the linked list ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start == NULL)
	{
		start = temp;
		
	}
	else{
		ptr=start;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next=temp;
	}
}

//-------------------------------Display the data------------------------------

void display()
{
	struct node *ptr;
	if(start == NULL)
	{
		printf("Linked List is empty  ");
	}
	else{
		ptr=start;
		while(ptr !=NULL)
		{
			printf("  %d   ",ptr->data);
			ptr=ptr->next;
		}
	}
}

//---------------------------------------inserting the data in linked list at begning--------------------------------

void insertbeg()
{
	struct node *temp,*ptr;
	int value;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data that you want to insert at begning  ");
	scanf("%d",&value);
	temp->data=value;
	temp->next=NULL;
	
	if(start == NULL)
	{
		start = temp;
	}
	else{
		temp->next=start;
		start = temp;	
	}
	printf("Data Inserted Successfully........\n");
}

//------------------------insert at end------------------------

void insertend()
{
	struct node *temp,*ptr;
	int value;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data that you want to insert at begning  ");
	scanf("%d",&value);
	temp->data=value;
	temp->next=NULL;
	
	if(start == NULL)
	{
		start = temp;
	}else{
		ptr = start;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next = temp;
	}
	
	printf("Data Inserted Successfully........\n");
}

void insertanypos()
{
	struct node *temp,*ptr;
	int value;
	temp = (struct node*)malloc(sizeof(struct node));
	int pos;
	printf("Enter the position where you want to insert the data  ");
	scanf("%d",&pos);
	
	printf("Enter the data that you want to insert at begning  ");
	scanf("%d",&value);
	temp->data=value;
	temp->next=NULL;
	
	if(pos == 0)
	{
		temp->next=start;
		start = temp;
	}else{
		int i;
		for(i=0,ptr=start;i<pos-1;i++)
		{
			ptr=ptr->next;
			if(ptr == NULL)
			{
				printf("position not found ");
				return;
			}
		}
		
		temp->next=ptr->next;
		ptr->next=temp;
	}
	
	printf("Data Inserted Successfully........\n");
	
}

void deletebeg()
{
	struct node* ptr;
	if(start == NULL)
	{
		printf("Linked list is empty  ");
		return;
	}
	else{
		ptr=start;
		start=start->next;
		printf("Deleted element is %d  ",ptr->data);
		printf("\n");
		free(ptr);
	}
}


void deleteend()
{
	struct node* ptr,*temp;
	if(start == NULL)
	{
		printf("Linked list is empty  ");
		return;
	}
	else if(start->next == NULL)
	{
		ptr=start;
		start = start->next;
		printf("Deleted element is %d ",ptr->data);
		printf("\n");
		free(ptr);
	}
	else{
		ptr=start;
		while(ptr->next != NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		printf("Deleted element is %d  ",ptr->data);
		printf("\n");
		free(ptr);
	}
	
}


void deletepos(){
	int i,pos;
	struct node *ptr,*temp;
	
	if(start == NULL)
	{
		printf("Linked list is empty   \n");
	     return;
	}
	else{
		printf("Enter the position from which you want to delete the data   ");
	     scanf("%d",&pos);
		if(pos == 0)
		{
			ptr = start;
			start = start->next;
			printf("\nThe deleted element is %d",ptr->next);
			free(ptr);
		}
		else{
			ptr = start;
			for(i=0;i<pos;i++)
			{
				temp= ptr;
				ptr=ptr->next;
				if(ptr==NULL)
				{
					printf("\n Position not found \n");
					return;
				}
			}
			temp->next=ptr->next;
			printf("Deleted element is %d ",ptr->data);
			free(ptr);
		}
	}
}
