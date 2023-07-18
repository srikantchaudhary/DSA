#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	
}*top=NULL;

void push();
void pop();
void display();
int main()
{
   int ch,value;
   while(1){
   	printf("\n---------------\n1.Push\n2.Pop\n3.Display\n4.Exit\n--------------\n");
   	printf("Enter your choice ");
     scanf("%d",&ch);
     switch(ch){
     	case 1:printf("Enter the value to be pushed  ");
     	       scanf("%d",&value);
		       push(value);
     	       break;
     	case 2:pop();
     	       break;
     	case 3:display();
     	       break;
          case 4:exit(0);
                break;
          default:printf("!!!!!!!!!!!!!!!!       Wrong choice          !!!!!!!!!!!");
                break;
	}
   }
}
void push(int value){
	struct Node *link;
	link=(struct Node*)malloc(sizeof(struct Node));     
	link->data=value;
	if(top==NULL){
		link->next=NULL;
	}
	else
	{
		link->next=top;
		top=link;
     }
}
void pop(){
	if(top==NULL){
		printf("Stack is empty  ");
	}
	else{
		struct Node *temp=top;
		printf("Deleted element %d",temp->data);
		top=temp->next;
		free(temp);
	}
}
void display(){
	if(top==NULL){
		printf("Stack is Empty ");
	}
	else{
		struct Node *temp;
		temp=top;
		while(temp->next != NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
