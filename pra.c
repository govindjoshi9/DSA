#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};

void LNLT(struct Node * ptr){
	while(ptr != NULL){
	printf("%d\n",ptr->data);
	ptr = ptr->next;
}
}

struct Node * incerAtFirst(struct Node * head, int data){
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data = data;

}
struct Node * insrtAtEnd(struct Node * head, int data){
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node * p = head;
	while(p->next != NULL){
		p= p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	return head;

}
int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;

	//Allocating the value
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	fourth = (struct Node *)malloc(sizeof(struct Node));
	
	//difine
	head->data = 7;
	head->next = second;
	second->data = 6;
	second->next = third;
	third->data = 63;
	third->next = fourth;
	fourth->data = 23;
	fourth->next = NULL;


	// LNLT(head);
	head = insrtAtEnd(head, 55);
	LNLT(head);

	
	
    
}