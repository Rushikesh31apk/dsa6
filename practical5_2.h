 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 	struct node*prev;
 	int data;
 	struct node*next;
 };
 struct node*head=NULL,*temp,*newnode,*q,*ptr;
 struct node*create(struct node*head)
 {
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("enter data:");
 	scanf("%d",&newnode->data);
 	newnode->prev=newnode->next=NULL;
 	if(head==NULL)
 	{
 		head=temp=newnode;
	 }
	 else{
		 temp->next=newnode;
		 newnode->prev=temp;
		 temp=newnode;
	 }
	 return head;
 }
 struct node*insert(struct node*head,int x)
 {
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=x;
 	newnode->prev=newnode->next=NULL;
    printf("Enter postion to insert this element\n");
    int z,i=1;
    scanf("%d",&z);
    if(z==1)
    {
    	
    	head->prev=newnode;
    	newnode->next=head;
    	head=newnode;
    	head->prev=NULL;
    	return head;
	}
	else
	{
		struct node*p=head;
		q=p->next;
		while(i<z)
		{
			p=p->next;
			q=p->next;
			i++;
		}
	    p->next=newnode;
	    newnode->prev=p;
	    newnode->next=q;
	    q->prev=newnode;
	}
   return head;	   
 }
 void display(struct node*head)
 {
 		temp=head;
 		do
 		{
 			printf("%d ",temp->data);
 			temp=temp->next;
		 }while(temp!=NULL);
		  }
 void rev(struct node *head)
 {
 	temp=head;
 	while(temp->next != NULL)
 	{
 		temp=temp->next;
	 }
	 do
	 {
	 	printf("%d ",temp->data);
	 	temp=temp->prev;
	 }while(temp!=NULL);
 }
 
 
