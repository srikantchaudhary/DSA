#include<stdio.h>
#include<stdlib.h>

#define max 50
int arr[max],top=0;
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
	if(top == max){
		printf("----------Stack is Overflow-------------- \n");
	}
	else{
		arr[top++]=value;
		printf("Value has been pushed \n");
	}
}
void pop(){
	if(top == -1)
	{
		printf("--------------Stack is Underflow------------------ \n");
	}
	else{
		top--;
		printf("Stack Element is Poped \n");
	}
}
void display(){
	if(top == -1 )
	{
		printf("Stack is Empty ");
	}
	else{
		int i;
	for(i=0;i<top;i++)
	{
		printf("%d ",arr[i]);
		
	}
	}
}
