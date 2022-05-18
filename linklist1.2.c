#include<stdio.h>
#include<stdlib.h>
void main()
{
 struct node
	{
	  int data;
	  struct node *next;
	};
 struct node *head=NULL,*pos=NULL,*tail=NULL;
 int k=0,a,c,ch,entry;
 while(1)
	{
	  printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.SEARCH\n5.EXIT");
	  printf("\n\nEnter your choice:  ");
	  scanf("%d",&ch);
	  switch(ch)
	  {
		case 1: {
			  printf("\nEnter Data:   ");
			  scanf("%d",&entry);
			  if(head == NULL)
				{
					head = (struct node *)malloc(sizeof(struct node));
					head -> data=entry;
					pos = head;
					tail = head;					
				}
			  else
				{
				 	tail -> next=(struct node *)malloc(sizeof(struct node));
					tail = tail -> next;
					tail -> data=entry;	
				}
			}break;
		case 2: {
	  		  pos=head;
			  printf("\n Elements are:");
			  while(pos!=NULL)
				{
					printf("\t%d",pos -> data);
					pos=pos -> next;	
				}break;
			}
		case 3: {
	  		  pos=head;
			  while(pos!=NULL)
				{
					c=c+1;
					pos=pos -> next;	
				}printf("\n The Number of elements are : %d",c);
				break;
			}
		case 4: {
	  		  pos=head;
			  printf("Enter the number to be found:   ");
			  scanf("%d",&a);
			  while(pos!=NULL)
				{
					if(pos -> data == a)
						{
						 k=1;
						 break;	
						}
					pos=pos -> next;
				}	
				if(k==1)
				       {
					printf("\nElement Found\n");
					k=0;
					break;
				       }		
				else
					printf("\n Element not found\n");
					
				
			  break;
			}
		case 5: {
			  printf("\n Goodbye\n");
			  exit(0);	
			}
	}
       }
}
