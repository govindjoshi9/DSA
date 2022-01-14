#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};

void linkedlistTrversal(struct Node * ptr)
{
	while(ptr != NULL)
	{
	printf("Elemant: %d\n",ptr->data);
	ptr = ptr->next;
	}

}

struct Node * insertAtFirst(struct Node *head, int data)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr -> next = head;
	ptr-> data = data;
	return ptr;
}


struct Node * insertAtEnd(struct Node *head, int data)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr-> data = data;
	struct Node * p = head;
	
	while(p->next !=NULL)
	{
	p= p->next;
	}
	p->next = ptr;
	ptr-> next =NULL;
	return head;

}
struct Node * insertAtAfterNode (struct Node *head, struct Node *prevNode, int data)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr-> data = data;
	ptr -> next = prevNode->next;
	prevNode -> next = ptr;
}


struct Node * insertAtIndex(struct Node *head, int data,int index)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node * p = head;
	int i = 0;
	while (i!=index-1)
	{
	p = p->next;
	i++;
	}
	ptr-> data = data;
	ptr->next = p->next;
	p->next = ptr;
}

int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	//Allocate memory for nodes in the linked list
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));	

	//Linked second and thired node
	head->data = 7;
	head->next = second;

	//Linked second and third node
	second->data = 6;
	second->next = third;
	
	//linked third and fourth
	third->data = 99;
	third->next = NULL;
	
	printf("Linked List before Insertion\n");
	linkedlistTrversal(head);

	//head = insertAtFirst(head,10);
	//head = insertAtIndex(head,56,1);
	// head = insertAtEnd(head,90);
	head = insertAtAfterNode(head,second,45);

	printf("Linked List after Insrtion\n");
	linkedlistTrversal(head);
	return 0;
}