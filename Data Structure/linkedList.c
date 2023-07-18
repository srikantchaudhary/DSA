#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_beg();
void delete_beg();
void insert_pos();
void insert_end();
void delete_end();
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
void main()
{
	int ch;
	while(1){
	printf("\n1.create\n2.display\n3.insert at begain\n4.delete at begein \n5.insert at position \n6.insert_end\n7.delete at end \n8.exit\n");
	printf("Enter your choice  \n");
	scanf("%d",&ch);
	switch(ch){
		case 1: create();
		        break;
	     case 2:display();
	             break;
	     case 3:insert_beg();
	             break;
	     case 4:delete_beg();
	             break;
	     case 5:insert_pos();
	             break;
	     case 6:insert_end();
	            break;
	     case 7:delete_end();
	             break;
	     case 8: exit(0);
	             break;
	     default:printf("Enter right choice  \n");
	             break;
	}
    } 
}

void create(){
	struct node *link,*temp;
	int value;
	link=(struct node*)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&link->data);
	link->next=NULL;
	if(start==NULL){
		start=link;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=link;
	}
}

void display(){
	struct node *temp;
	if(start==NULL){
		printf("LINKED LIST IS EMPTY ");
	}
	else{
		temp=start;
		printf("\n-----------LINKED LIST IS ----------------\n");
		while(temp!=NULL){
			printf("%d -> ",temp->data);
			temp=temp->next;
		}
		printf("\n---------------------------\n");
	}
}

void insert_beg(){
	struct node *link,*temp;
	int value;
	link=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert at begin ");
	scanf("%d",&link->data);
	link->next=NULL;
	if(start==NULL){
		start=link;
		
	}
	else{
		link->next=start;
		start=link;
	}
}
void delete_beg(){
	struct node* temp;
	if(start==NULL){
		printf("Linked list is alrady Empty  ");
	}
	else{
		temp=start;
		start=start->next;
		free(temp);
	}
}

//                Insert at given position

void insert_pos(){
	struct node* link,* temp;
	int i,pos;
	link=(struct node*)malloc(sizeof(struct node));
	printf("Enter the position where you want to insert the element ");
	scanf("%d",&pos);
	printf("Enter Data to insert  ");
	scanf("%d",&link->data);
	link->next=NULL;
	if(pos==0){
		link->next=start;
		start=link;
	}
	else{
		for(i=0,temp=start;i<pos-1;i++)
		{
			temp=temp->next;
			if(temp==NULL){
				printf("Position not found    ");
				return;
			}
			
		}
		link->next=temp->next;
		temp->next=link;
		
	}
}

void insert_end(){
	struct node* link,*temp;
	link=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data that you want to insert at end   ");
	scanf("%d",&link->data);
	link->next=NULL;
	if(start==NULL){
		start=link;
	}
	else{
		temp=start;
		while(temp->next !=NULL){
			temp=temp->next;
		}
		temp->next=link;
	}
}

void delete_end(){
	struct node*temp,*ptr;
	if(start==NULL){
		printf(" LINKED LIST IS ALRADY EMPTY  ");
	}
	else if(start->next==NULL){
		temp=start;
		start=NULL;
		printf("\nThe deleted element is %d ",temp->data);
		free(temp);
	}else{
		temp=start;
		while(temp->next!=NULL){
			ptr=temp;
			temp=temp->next;
	     }
	     ptr->next=NULL;
	     printf("The deleted element is %d ",temp->data);
	     free(temp);
	}
}
