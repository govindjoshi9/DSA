#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

struct Node * deleteFirst(struct Node * head)
{
	struct Node * ptr = head;
	head = head ->next;
	free(ptr);
	return head;
	
}

struct Node * deleteAtIndex(struct Node * head, int index)
{
	struct Node *p = head;
	struct Node *q = head->next;
	for(int i =0; i<index-1;i++)
	{
	p =p ->next;
	q = q ->next;
	}
	p->next = q->next;
	free(q);
	return head;


}
struct Node * deleteAtEnd(struct Node * head)
{
	struct Node *p = head;
	struct Node *q = head->next;
	while(q->next != NULL)
	{
	p =p ->next;
	q = q ->next;
	}
	p->next = NULL;
	free(q);
	return head;


}

struct Node * deleteAtValue(struct Node * head,int value)
{
	struct Node *p = head;
	struct Node *q = head->next;
	while(q->data!=value && q->next != NULL)
	{
	p =p ->next;
	q = q ->next;
	}
	if(q->data ==value)
	{
	p->next = q->next;	
	free(q);
	}
	return head;


}

void linklistTraversal(struct Node * ptr)
{
	while(ptr != NULL){
	printf("Elemant : %d\n",ptr->data);
	ptr = ptr->next;
	}
}
int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node *  fourth;

	head = (struct Node * )malloc(sizeof(struct Node));
	second = (struct Node * )malloc(sizeof(struct Node));
	third = (struct Node * )malloc(sizeof(struct Node));
	fourth = (struct Node * )malloc(sizeof(struct Node));

	head ->data = 34;
	head ->next = second;

	second ->data = 54;
	second ->next = third;

	third ->data = 32;
	third ->next = fourth;

	fourth -> data = 98;
	fourth -> next = NULL;
	
	printf("Linked List Before Deletion\n");
	linklistTraversal(head);
	
	//head = deleteFirst(head); //For deleting first elemant of linked list
	//head = deleteAtIndex(head ,2);
	//head = deleteAtEnd(head);
	head = deleteAtValue(head,54);
	printf("Linked List Before Deletion\n");
	linklistTraversal(head);

	return 0;
}