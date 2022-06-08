#include<stdio.h>
#include<stdlib.h>
#define n 5

int top=-1;
int stack[n];

int isfull()
{
	if(top==n-1)
		return 1;
	else
		return 0;
}

int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

void push(int val)
{
	if(isfull())
		printf("\nOverflow\n");
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d pushed\n",stack[top]);
	}
}

void pop()
{
	if(isempty())
		printf("\nUnderflow\n");
	else
	{
		printf("\n%d popped\n",stack[top]);
		stack[top]=-1;
		top--;
	}
}

void display()
{
	if(isempty())
		printf("\nEmpty Stack\n");
	else
	{	
		printf("\nElements are: \n");
		for(int i=top;i>=0;i--)
			printf("\n|%d| ",stack[i]);
		printf("\n```");
	}
}

void findtop()
{
	printf("\ntop position=%d\ntop value=%d\n",top,stack[top]);
}

void main()
{
	int ch,entry;
	
	while(1)
	{
		printf("\n1:PUSH\n2:POP\n3:DISPLAY\n4:Is Stack Empty\n5:Is Stack Full\n6:Find top\n7:Exit\n\nEnter your choice: \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter data:\n");
				scanf("%d",&entry);
				push(entry);
				break;
			}
			
			case 2:
			{
				pop();
				break;
			}
			
			case 3:
			{
				display();
				break;
			}
			
			case 4:
			{
				if(isempty())
					printf("\nStack is Empty\n");
				else
					printf("\nStack is not Empty \n");
				break;
			}
			
			case 5:
			{
				if(isfull())
					printf("\nStack is Full\n");
				else
					printf("\nStack is not Full\n ");
				break;
			}
			
			case 6:
			{
				findtop();
				break;
			}
			
			case 7:
			{
				printf("\nTHANK YOU\nEXITING...\n");
				exit(0);
			}
			
			default:
			{
				printf("Invalid choice\n");
			}
		}
	}
}
			
