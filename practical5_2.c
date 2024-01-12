#include<stdio.h>
#include<stdlib.h>
#include "practical5_2.h"
void main()
{
	int ch,x;
	do
	{
		printf("\nEnter your choice:");
		printf("\n1.create and append\n2.insert\n3.reverce\n4.display\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("creating doubly linked list:\n");
				head=create(head);
				break;
			case 2:
				printf("enter elment to inserting:\n");
				scanf("%d",&x);
				head=insert(head,x);
				break;
			case 3:
				rev(head);
				break;
			case 4:
				printf("show nodes:\n");
				display(head);
				break;
			default:
				printf("wrong input\n");
		}
	}while(ch!=5);
}
