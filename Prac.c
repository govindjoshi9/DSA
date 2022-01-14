#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};

void show(struct Node * ptr)
{
	while(ptr!=NULL){
		printf("Elemant: %d\n",ptr->data);
		ptr= ptr->next;
	}
}

struct Node * insertAtFirst(struct Node *head, int data)
{
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr -> next = head;
	ptr -> data = data;
	return ptr;
}

struct Node *inseratend(struct Node * head, int data)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node * p = head;
	ptr->data = data;
	while(p->next != NULL){
		p =p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	return ptr;
}

struct Node * insertatindex(struct Node * head, int data ,int index)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node * p = head;
	int i =0;
	while(i!=index-1){
		p =p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
	
}

struct Node * insertafternode(struct Node * head, struct Node * prv, int data)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = prv->next;
	prv->next = ptr;
	return head;
}

struct Node * dltfirst(struct Node * head )
{
	struct Node * ptr = head;
	head = head->next;
	free(ptr);
	return head;

}
struct Node * dltend(struct Node * head)
{
	struct Node * p = head;
	struct Node * q = head->next;
	while(q->next != NULL)
	{
		p =p->next;
		q = q->next;
	}
	p->next = NULL;
	free(q);
	
	return head;

}
struct Node * dltatindex(struct Node * head, int index)
{
	struct Node * p = head ;
	struct Node * q = head ->next;
	int i =0;
	while(i != index-1){
		p= p->next;
		q=q->next;
		i++;
	}
	p->next = q->next;
	free(q);
	return(head);
}

struct Node * dltatvalue(struct Node * head,int value){
	struct Node * p = head;
	struct Node * q = head ->next;
	while(q->data!=value && q->data != NULL)
	{
		p = p->next;
		q= q->next;
	}
	if(q->data ==value){
		p->next = q->next;
		free(q);

	}
	return head;
}
int main()
{
	struct Node * head;
	struct Node * N1;
	struct Node * N2;
	struct Node * N3;

	head = (struct Node *)malloc(sizeof(struct Node));
	N1 = (struct Node *)malloc(sizeof(struct Node));
	N2 = (struct Node *)malloc(sizeof(struct Node));
	N3 = (struct Node *)malloc(sizeof(struct Node));

	head ->data= 2;
	head ->next = N1;

	N1 -> data =4;
	N1 -> next = N2;

	N2 -> data = 5;
	N2 -> next = N3;

	N3 -> data = 34;
	N3 -> next = NULL;

	printf("Before insrtion\n");
	show(head);
	
	// head = insertAtFirst(head ,23);
	// head = inseratend(head,90);
	// head = insertatindex(head,69,2);
	// head = insertafternode(head,N2,56);

	// head = dltfirst(head);
	// head = dltend(head);
	// head = dltatindex(head,2);
	head = dltatvalue(head,4);
	printf("After insrtion\n");
	show(head);
}