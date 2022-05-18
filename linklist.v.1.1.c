#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	

};
void main()

{
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,count;
	while(1)
	{
		printf("\n1.Insert\n2.Display\n3.count\n4.Exit\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Data: \n");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node *)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
				}telnet towel.blinkenlights.nl
				else
				{
					tail->next=(struct node *)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
					
				}
				break;
			case 2:	
				pos=head;
				printf("\nElements are : ");
				while(pos!=NULL)
				{
					printf("\t%d",pos->data);
					pos=pos->next;
				}break;
			case 3:	
				 count=0;
				pos=head;
				printf("\nElements are : ");
				while(pos!=NULL)
				{
					count++;
					pos=pos->next;
					
				}
				printf("\nThe count is %d\n ",count);
				break;
			case 4:
				printf("\nGoodbye\n");
				exit(0);
		}
	}
}
