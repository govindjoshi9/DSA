#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void TravrsalLL(struct Node * head){
	struct Node * ptr = head;
	
	do{
	printf("Elemant: %d\n",ptr->data);
	ptr = ptr->next;
	}while(ptr!=head);

}

struct Node * insertAtFirst(struct Node * head, int data)
{
	struct Node  * ptr = (struct Node *)malloc(sizeof(struct Node ));
	ptr->data = data;
	struct Node * p = head ->next;
	while(p->next!=head){
	p= p->next;
	//At this point ptr point to head of linked list
	}
	p->next = ptr;
	ptr->next =head;
	head= ptr;
	return head;
	
}

int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));
	fourth = (struct Node *) malloc(sizeof(struct Node));

	head -> data = 34;
	head -> next = second;
	
	second ->data = 78;
	second ->next = third;
	
	third -> data = 45;
	third -> next = fourth;
	
	fourth -> data = 66;
	fourth -> next = NULL; 
	
	printf("Cir Linked List before Insertion\n");
	TravrsalLL(head);

	head = insertAtFirst(head,54);
	
	printf("Cir Linked List After Insertion\n");
	TravrsalLL(head);
 	return 0;
}